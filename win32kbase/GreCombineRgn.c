/*
 * XREFs of GreCombineRgn @ 0x1C0041BD0
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0014608 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     EngCombineRgn @ 0x1C0019AD0 (EngCombineRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C003B638 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x1C003D41C (GetMonitorDC.c)
 *     NtGdiCombineRgn @ 0x1C003DE70 (NtGdiCombineRgn.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C0044E20 (UserSetDCVisRgn.c)
 *     UserValidateCopyRgn @ 0x1C00A9370 (UserValidateCopyRgn.c)
 *     EngCopyRgn @ 0x1C0197690 (EngCopyRgn.c)
 *     EngIntersectRgn @ 0x1C0197820 (EngIntersectRgn.c)
 *     EngSubtractRgn @ 0x1C0197990 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C0197A30 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C0197AD0 (EngXorRgn.c)
 * Callees:
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0042720 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00434E0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0044F90 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0045420 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1C004832C (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C005173C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C0053560 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0055304 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0056EF8 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DE3A0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreCombineRgn(HRGN a1, HRGN a2, HRGN a3, int a4)
{
  __int64 v8; // rax
  unsigned int v9; // ebx
  bool v10; // zf
  RGNOBJAPI *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-60h] BYREF
  __int64 v18; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v19[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v20[3]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v21[4]; // [rsp+60h] [rbp-20h] BYREF

  if ( (unsigned int)(a4 - 1) <= 4 )
  {
    if ( a4 == 5 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a1, 0, 1);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a2, a4 - 4, 0);
      v8 = v20[0];
      v9 = 0;
      if ( v20[0] )
      {
        if ( !v19[0] )
        {
LABEL_9:
          EngSetLastError(6u);
          goto LABEL_10;
        }
        v10 = (unsigned int)RGNOBJAPI::bCopy((RGNOBJAPI *)v20, (struct RGNOBJ *)v19) == 0;
        v8 = v20[0];
        if ( !v10 )
        {
          v17 = (v20[0] + 24LL) & -(__int64)(v20[0] != 0LL);
          v9 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v17);
LABEL_10:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
          v11 = (RGNOBJAPI *)v20;
LABEL_31:
          RGNOBJAPI::~RGNOBJAPI(v11);
          return v9;
        }
      }
      if ( v19[0] && v8 )
        goto LABEL_10;
      goto LABEL_9;
    }
    if ( a1 != a2 && a1 != a3 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a2, 1, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a3, 1, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a1, 0, 1);
      v12 = v21[0];
      v9 = 0;
      if ( v21[0] )
      {
        if ( v19[0] && v20[0] )
        {
          if ( (unsigned int)RGNOBJAPI::iCombine((RGNOBJAPI *)v20, (struct RGNOBJ *)v21, (struct RGNOBJ *)v19, a4) )
          {
            v17 = (v20[0] + 24LL) & -(__int64)(v20[0] != 0LL);
            v9 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v17);
LABEL_23:
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
LABEL_30:
            v11 = (RGNOBJAPI *)v21;
            goto LABEL_31;
          }
          v12 = v21[0];
        }
        if ( v12 && v19[0] && v20[0] )
          goto LABEL_23;
      }
      EngSetLastError(6u);
      goto LABEL_23;
    }
    if ( a2 == a3 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a1, 0, 1);
      v13 = v21[0];
      v9 = 0;
      if ( v21[0] )
      {
        if ( (unsigned int)(a4 - 3) <= 1 )
          RGNOBJ::vSet((RGNOBJ *)v21);
        v17 = (v13 + 24) & -(__int64)(v13 != 0);
        v9 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v17);
      }
      else
      {
        EngSetLastError(6u);
      }
      goto LABEL_30;
    }
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
    v9 = 0;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a2, 0, a1 == a2);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a3, 0, a1 == a3);
    if ( v17 )
    {
      v14 = v20[0];
      if ( !v20[0] )
      {
LABEL_45:
        EngSetLastError(6u);
        goto LABEL_46;
      }
      if ( !v19[0] )
      {
LABEL_43:
        if ( v14 && v19[0] )
          goto LABEL_46;
        goto LABEL_45;
      }
      if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v17, (struct RGNOBJ *)v20, (struct RGNOBJ *)v19, a4) )
      {
        if ( a1 == a2 )
        {
          if ( !(unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)v20, (struct RGNOBJ *)&v17) )
          {
LABEL_46:
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
            return v9;
          }
          v15 = v20[0];
        }
        else
        {
          if ( !(unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)v19, (struct RGNOBJ *)&v17) )
            goto LABEL_46;
          v15 = v19[0];
        }
        v18 = (v15 + 24) & -(__int64)(v15 != 0);
        v9 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v18);
        goto LABEL_46;
      }
    }
    v14 = v20[0];
    goto LABEL_43;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
