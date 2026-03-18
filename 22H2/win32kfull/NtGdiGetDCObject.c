/*
 * XREFs of NtGdiGetDCObject @ 0x1C01190E0
 * Callers:
 *     CreateCompatiblePublicDC @ 0x1C023F4DC (CreateCompatiblePublicDC.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E4C0 (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0266BBC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiGetDCObject(__int64 a1, int a2)
{
  __int64 v3; // rsi
  __int64 v6; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  _QWORD *v9; // rax
  struct UMPDOBJ *v10; // rdx
  DC *v11; // r9
  int v12; // ebx
  struct _DC_ATTR *v13; // rax
  __int64 v14; // rdx
  int v15; // ebx
  __int64 *v16; // rax
  struct SURFACE *v17; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v19; // rbx
  DC *v20; // [rsp+28h] [rbp-59h] BYREF
  __int64 v21; // [rsp+30h] [rbp-51h]
  _BYTE v22[32]; // [rsp+38h] [rbp-49h] BYREF
  __int128 v23; // [rsp+58h] [rbp-29h] BYREF
  __int64 v24; // [rsp+68h] [rbp-19h]
  int v25; // [rsp+70h] [rbp-11h]
  _QWORD v26[2]; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v27[32]; // [rsp+88h] [rbp+7h] BYREF
  __int16 v28; // [rsp+A8h] [rbp+27h]
  __int64 v29; // [rsp+B0h] [rbp+2Fh]
  __int64 v30; // [rsp+B8h] [rbp+37h]
  __int64 v31; // [rsp+C0h] [rbp+3Fh]
  int v32; // [rsp+F8h] [rbp+77h] BYREF

  v3 = 0LL;
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 || a1 != -589410304 )
  {
    v21 = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v22);
    LOBYTE(v6) = 1;
    v20 = (DC *)HmgLockEx(a1, v6, 0LL);
    if ( v20 )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread && (v8 = *ThreadWin32Thread) != 0 && (v9 = (_QWORD *)(v8 + 40), (_QWORD *)*v9 != v9) )
        v10 = (struct UMPDOBJ *)(*v9 - 40LL);
      else
        v10 = 0LL;
      v11 = v20;
      if ( *((_WORD *)v20 + 6) == 1 )
      {
        *((_QWORD *)v20 + 271) = v10;
        *((_DWORD *)v20 + 544) = 0xFFFF;
        v11 = v20;
      }
      else if ( *((struct UMPDOBJ **)v20 + 271) != v10 )
      {
        XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v20, v10);
        goto LABEL_21;
      }
      if ( HIDWORD(v21) )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v11 + 6) + 40LL) & 0x8000) == 0 )
        {
LABEL_18:
          _InterlockedDecrement((volatile signed __int32 *)v11 + 3);
LABEL_22:
          v11 = 0LL;
          v20 = 0LL;
          goto LABEL_58;
        }
        v12 = *((_DWORD *)v11 + 528);
        if ( v12 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          v11 = v20;
          goto LABEL_18;
        }
      }
      else
      {
        if ( !*((_DWORD *)v11 + 528) )
        {
LABEL_29:
          if ( !v11 )
          {
LABEL_68:
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v22);
            return v3;
          }
          if ( (*((_DWORD *)v11 + 11) & 2) != 0 )
          {
LABEL_36:
            if ( (*((_DWORD *)v11 + 130) & 4) != 0 )
            {
              DC::vMarkTransformDirty(v11);
              v11 = v20;
            }
            if ( !v11 )
              goto LABEL_68;
            v14 = *((_QWORD *)v11 + 122);
            v15 = *(_DWORD *)(v14 + 152);
            if ( (v15 & 0x1000) != 0 )
            {
              GreDCSelectBrush(v11, *(_QWORD *)(v14 + 160));
              v11 = v20;
            }
            if ( (v15 & 0x2000) != 0 )
            {
              GreDCSelectPen(v11, *(_QWORD *)(*((_QWORD *)v11 + 122) + 168LL));
              v11 = v20;
            }
            if ( a2 == 327680 )
            {
              v26[0] = 0LL;
              v26[1] = 0LL;
              UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v27);
              v28 = 256;
              v23 = 0LL;
              v24 = 0LL;
              v25 = 0;
              v26[0] = 0LL;
              v31 = 0LL;
              v30 = 0LL;
              v29 = 0LL;
              DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v23, (struct XDCOBJ *)&v20);
              v17 = (struct SURFACE *)*((_QWORD *)v20 + 62);
              if ( !v17 )
                v17 = SURFACE::pdibDefault;
              v3 = *((_QWORD *)v17 + 4);
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v23);
              if ( v26[0] )
                DLODCOBJ::vUnlock((DLODCOBJ *)v26);
              UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v27);
              v11 = v20;
              goto LABEL_58;
            }
            if ( a2 == 0x80000 )
            {
              v3 = *((_QWORD *)v11 + 10);
            }
            else if ( a2 == 655360 )
            {
              v3 = *(_QWORD *)(*((_QWORD *)v11 + 122) + 296LL);
            }
            else
            {
              if ( a2 == 0x100000 )
              {
                v16 = (__int64 *)*((_QWORD *)v11 + 17);
              }
              else
              {
                if ( ((a2 - 3145728) & 0xFFDFFFFF) != 0 )
                  goto LABEL_58;
                v16 = (__int64 *)*((_QWORD *)v11 + 18);
              }
              v3 = *v16;
            }
LABEL_58:
            if ( v11 )
            {
              if ( (_DWORD)v21 && (*((_DWORD *)v11 + 11) & 2) != 0 )
              {
                if ( !HIDWORD(v21) )
                {
                  UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v20);
                  if ( UserAttr )
                    DC::RestoreAttributes(v20, UserAttr);
                  v11 = v20;
                }
                *((_DWORD *)v11 + 11) &= ~2u;
                v11 = v20;
                LODWORD(v21) = 0;
              }
              v32 = 0;
              v19 = *(_QWORD *)v11;
              HmgDecrementExclusiveReferenceCountEx(v11, HIDWORD(v21), &v32);
              if ( v32 )
                GrepDeleteDC(v19, 0x2000000LL);
            }
            goto LABEL_68;
          }
          if ( HIDWORD(v21) )
          {
LABEL_35:
            *((_DWORD *)v11 + 11) |= 2u;
            v11 = v20;
            LODWORD(v21) = 1;
            goto LABEL_36;
          }
          v13 = XDCOBJ::GetUserAttr((XDCOBJ *)&v20);
          if ( !v13 || DC::SaveAttributes(v20, v13) )
          {
            v11 = v20;
            goto LABEL_35;
          }
LABEL_21:
          _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
          goto LABEL_22;
        }
        *((_DWORD *)v11 + 528) = 0;
      }
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
    v11 = v20;
    goto LABEL_29;
  }
  if ( a2 == 655360 )
    return GreGetStockObject(13LL);
  else
    return 0LL;
}
