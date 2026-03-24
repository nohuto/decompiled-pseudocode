/*
 * XREFs of GreCombineRgn @ 0x1C003ACD0
 * Callers:
 *     _GetDCEx @ 0x1C0038070 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C0039D90 (UserSetDCVisRgn.c)
 *     GetMonitorDC @ 0x1C003B0E0 (GetMonitorDC.c)
 *     NtGdiCombineRgn @ 0x1C003CFF0 (NtGdiCombineRgn.c)
 *     UserValidateCopyRgn @ 0x1C006B740 (UserValidateCopyRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C007040C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C00C77F4 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     EngCombineRgn @ 0x1C014B900 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C014B9A0 (EngCopyRgn.c)
 *     EngIntersectRgn @ 0x1C014BCB0 (EngIntersectRgn.c)
 *     EngSubtractRgn @ 0x1C014BEB0 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C014BF50 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C014BFF0 (EngXorRgn.c)
 * Callees:
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0028840 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C002C3A0 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C002C700 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C002CBC0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C002CCE4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0031758 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0033EC0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0035D10 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00367E0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     EngSetLastError @ 0x1C009F430 (EngSetLastError.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00C9240 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreCombineRgn(HRGN a1, HRGN a2, HRGN a3, int a4)
{
  struct OBJECT *v8; // rax
  unsigned int v9; // ebx
  RGNOBJAPI *v10; // rcx
  __int64 v11; // rcx
  struct OBJECT *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  struct OBJECT *v15; // rax
  struct OBJECT *v16; // rcx
  struct OBJECT **v17; // rcx
  REGION *v19[2]; // [rsp+28h] [rbp-79h] BYREF
  struct OBJECT *v20[7]; // [rsp+38h] [rbp-69h] BYREF
  struct OBJECT *v21[7]; // [rsp+70h] [rbp-31h] BYREF
  _QWORD v22[8]; // [rsp+A8h] [rbp+7h] BYREF

  if ( (unsigned int)(a4 - 1) <= 4 )
  {
    if ( a4 == 5 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a1, 0, 1);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a2, a4 - 4, 0);
      v8 = v20[0];
      v9 = 0;
      if ( v20[0] )
      {
        if ( !v21[0] )
        {
LABEL_10:
          EngSetLastError(6u);
          goto LABEL_11;
        }
        if ( (unsigned int)RGNOBJAPI::bCopy(v20, (struct RGNOBJ *)v21) )
        {
          v9 = RGNOBJ::iComplexity((RGNOBJ *)v20);
LABEL_11:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v21);
          v10 = (RGNOBJAPI *)v20;
LABEL_32:
          RGNOBJAPI::~RGNOBJAPI(v10);
          return v9;
        }
        v8 = v20[0];
      }
      if ( v21[0] && v8 )
        goto LABEL_11;
      goto LABEL_10;
    }
    if ( a1 != a2 && a1 != a3 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v22, a2, 1, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a3, 1, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a1, 0, 1);
      v11 = v22[0];
      v9 = 0;
      if ( v22[0] )
      {
        v12 = v21[0];
        if ( v21[0] && v20[0] )
        {
          if ( (unsigned int)RGNOBJAPI::iCombine((RGNOBJAPI *)v20, (struct RGNOBJ *)v22, (struct RGNOBJ *)v21, a4) )
          {
            v9 = RGNOBJ::iComplexity((RGNOBJ *)v20);
LABEL_24:
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v21);
LABEL_31:
            v10 = (RGNOBJAPI *)v22;
            goto LABEL_32;
          }
          v11 = v22[0];
          v12 = v21[0];
        }
        if ( v11 && v12 && v20[0] )
          goto LABEL_24;
      }
      EngSetLastError(6u);
      goto LABEL_24;
    }
    if ( a2 == a3 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v22, a1, 0, 1);
      v13 = v22[0];
      v9 = 0;
      if ( v22[0] )
      {
        if ( (unsigned int)(a4 - 3) <= 1 )
        {
          v14 = *(_QWORD *)(v22[0] + 88LL);
          *(_DWORD *)(v22[0] + 80LL) = 16;
          *(_DWORD *)(v13 + 84) = 1;
          *(_QWORD *)(v13 + 96) = 0LL;
          *(_QWORD *)(v13 + 104) = 0LL;
          *(_DWORD *)v14 = 0;
          *(_DWORD *)(v14 + 4) = 0x80000000;
          *(_QWORD *)(v14 + 8) = 0x7FFFFFFFLL;
          *(_QWORD *)(v13 + 40) = v14 + 16;
        }
        v9 = RGNOBJ::iComplexity((RGNOBJ *)v22);
      }
      else
      {
        EngSetLastError(6u);
      }
      goto LABEL_31;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v19, 0LL, 1LL);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v19);
    v9 = 0;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a2, 0, a1 == a2);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a3, 0, a1 == a3);
    if ( v19[0] )
    {
      v15 = v20[0];
      if ( !v20[0] )
      {
LABEL_46:
        EngSetLastError(6u);
        goto LABEL_47;
      }
      v16 = v21[0];
      if ( !v21[0] )
      {
LABEL_44:
        if ( v15 && v16 )
          goto LABEL_47;
        goto LABEL_46;
      }
      if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)v19, (struct RGNOBJ *)v20, (struct RGNOBJ *)v21, a4) )
      {
        if ( a1 == a2 )
        {
          if ( !(unsigned int)RGNOBJAPI::bSwap(v20, (struct RGNOBJ *)v19) )
          {
LABEL_47:
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v21);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
            RGNMEMOBJTMP::~RGNMEMOBJTMP(v19);
            return v9;
          }
          v17 = v20;
        }
        else
        {
          if ( !(unsigned int)RGNOBJAPI::bSwap(v21, (struct RGNOBJ *)v19) )
            goto LABEL_47;
          v17 = v21;
        }
        v9 = RGNOBJ::iComplexity((RGNOBJ *)v17);
        goto LABEL_47;
      }
    }
    v15 = v20[0];
    v16 = v21[0];
    goto LABEL_44;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
