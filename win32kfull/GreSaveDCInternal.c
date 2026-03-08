/*
 * XREFs of GreSaveDCInternal @ 0x1C00C6CB0
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0006508 (-UT_InvertCaret@@YAXXZ.c)
 *     NtGdiSaveDC @ 0x1C00C6C90 (NtGdiSaveDC.c)
 *     xxxClientExtTextOutW @ 0x1C0214CF4 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0215674 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0215A80 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0215E88 (xxxClientPSMTextOut.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0225290 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 * Callees:
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x1C0050094 (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 *     ?bSavePath@@YAHAEAVXDCOBJ@@J@Z @ 0x1C00DC16C (-bSavePath@@YAHAEAVXDCOBJ@@J@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269660 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vRestorePath@@YAXAEAVXDCOBJ@@J@Z @ 0x1C02899DC (-vRestorePath@@YAXAEAVXDCOBJ@@J@Z.c)
 */

__int64 __fastcall GreSaveDCInternal(Gre::Base *a1, int a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 v5; // rdx
  struct Gre::Base::SESSION_GLOBALS *v6; // r13
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  struct UMPDOBJ *v10; // rdx
  DC *v11; // r8
  int v12; // ebx
  unsigned int v13; // edi
  DC *v14; // rcx
  struct _DC_ATTR *v15; // rax
  __int64 v16; // rbx
  __int64 v18; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v20; // rdx
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // esi
  __int64 v25; // r12
  int v26; // r15d
  unsigned int v27; // edi
  __int64 v28; // rdi
  int v29; // eax
  DC *v30; // rcx
  __int64 v31; // rax
  DC *v32; // [rsp+20h] [rbp-48h] BYREF
  __int64 v33; // [rsp+28h] [rbp-40h]
  _QWORD v34[2]; // [rsp+30h] [rbp-38h] BYREF
  int v35; // [rsp+40h] [rbp-28h]
  int v36; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v37; // [rsp+A8h] [rbp+40h] BYREF

  v4 = Gre::Base::Globals(a1);
  LOBYTE(v5) = 1;
  v33 = 0LL;
  v6 = v4;
  v32 = (DC *)HmgLockEx(a1, v5, 0LL);
  if ( !v32 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet(v18);
LABEL_32:
    v11 = v32;
    goto LABEL_33;
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && (v8 = *ThreadWin32Thread) != 0 && (v9 = *(_QWORD *)(v8 + 40), v9 != v8 + 40) )
    v10 = (struct UMPDOBJ *)(v9 - 40);
  else
    v10 = 0LL;
  v11 = v32;
  if ( *((_WORD *)v32 + 6) == 1 )
  {
    *((_QWORD *)v32 + 271) = v10;
    *((_DWORD *)v32 + 544) = 0xFFFF;
    v11 = v32;
  }
  else if ( *((struct UMPDOBJ **)v32 + 271) != v10 )
  {
    XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v32, v10);
    goto LABEL_16;
  }
  if ( HIDWORD(v33) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v11 + 6) + 40LL) & 0x8000) == 0 )
    {
LABEL_13:
      _InterlockedDecrement((volatile signed __int32 *)v11 + 3);
LABEL_17:
      v13 = 0;
      v32 = 0LL;
LABEL_18:
      EngSetLastError(6u);
      goto LABEL_19;
    }
    v12 = *((_DWORD *)v11 + 528);
    if ( v12 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v11 = v32;
      goto LABEL_13;
    }
    goto LABEL_32;
  }
LABEL_33:
  if ( !v11 )
    goto LABEL_42;
  if ( (*((_DWORD *)v11 + 11) & 2) == 0 )
  {
    if ( HIDWORD(v33) )
    {
LABEL_39:
      *((_DWORD *)v11 + 11) |= 2u;
      v11 = v32;
      LODWORD(v33) = 1;
      goto LABEL_40;
    }
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v32);
    if ( !UserAttr || DC::SaveAttributes(v32, UserAttr) )
    {
      v11 = v32;
      goto LABEL_39;
    }
LABEL_16:
    _InterlockedDecrement((volatile signed __int32 *)v32 + 3);
    goto LABEL_17;
  }
LABEL_40:
  if ( (*((_DWORD *)v11 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v11);
    v11 = v32;
  }
LABEL_42:
  v13 = 0;
  if ( !v11 )
    goto LABEL_18;
  if ( !a2 )
  {
    if ( (*(_DWORD *)(HmgPentryFromPobj(v11) + 8) & 0xFFFFFFFE) == 0 )
      goto LABEL_18;
    v11 = v32;
  }
  v20 = *((_QWORD *)v11 + 122);
  v21 = *(_DWORD *)(v20 + 152);
  if ( (v21 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v11, *(_QWORD *)(v20 + 160));
    v11 = v32;
  }
  if ( (v21 & 0x2000) != 0 )
  {
    GreDCSelectPen(v11, *(_QWORD *)(*((_QWORD *)v11 + 122) + 168LL));
    v11 = v32;
  }
  v22 = *((_QWORD *)v11 + 6);
  v37 = v22;
  if ( (*(_DWORD *)(v22 + 40) & 1) != 0 )
    GreLockVisRgn(v22);
  v23 = *((_QWORD *)v6 + 5);
  GreAcquireSemaphore(v23);
  v24 = *((_DWORD *)v32 + 9) & 0x800;
  if ( v24 )
    DC::bMakeInfoDC(v32, 0);
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v34, (struct DCOBJ *)&v32);
  if ( v34[0] )
  {
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&v37);
    v25 = *((_QWORD *)v32 + 14);
    *((_QWORD *)v32 + 14) = *(_QWORD *)v34[0];
    v26 = *(_DWORD *)(v34[0] + 104LL);
    if ( (unsigned int)bSavePath((struct XDCOBJ *)&v32, v26 + 1) )
    {
      v27 = *(_DWORD *)(v34[0] + 104LL);
      if ( (unsigned int)bSaveRegion(&v32, v27 + 1) )
      {
        if ( (unsigned int)GreSetDCOwnerEx(*(_QWORD *)v34[0], 2147483666LL, 0LL, 0LL) )
        {
          v35 = 1;
          PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v37);
          if ( (*((_DWORD *)v32 + 9) & 0x4000) != 0 )
            *(_DWORD *)(v34[0] + 36LL) |= 0x4000u;
          v28 = *(_QWORD *)(v34[0] + 496LL);
          if ( v28 )
          {
            v29 = *(_DWORD *)(v28 + 112);
            if ( (v29 & 0x800) != 0 )
            {
              INC_SHARE_REF_CNT(*(_QWORD *)(v34[0] + 496LL));
            }
            else if ( v29 >= 0 )
            {
              INC_SHARE_REF_CNT(*(_QWORD *)(v34[0] + 496LL));
              ++*(_DWORD *)(v28 + 168);
            }
          }
          INC_SHARE_REF_CNT(*((_QWORD *)v32 + 17));
          INC_SHARE_REF_CNT(*((_QWORD *)v32 + 18));
          INC_SHARE_REF_CNT(*((_QWORD *)v32 + 19));
          INC_SHARE_REF_CNT(*((_QWORD *)v32 + 12));
          v30 = v32;
          v31 = *((_QWORD *)v32 + 11);
          if ( v31 != *((_QWORD *)v6 + 750) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v31 + 56));
            v30 = v32;
          }
          v13 = *((_DWORD *)v30 + 26);
          *((_DWORD *)v30 + 26) = v13 + 1;
          goto LABEL_72;
        }
        vRestoreRegion(&v32, v27);
      }
      vRestorePath((struct XDCOBJ *)&v32, v26);
    }
    v13 = 0;
    *((_QWORD *)v32 + 14) = v25;
  }
  else
  {
    EngSetLastError(8u);
  }
LABEL_72:
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v34);
  if ( v24 )
    DC::bMakeInfoDC(v32, 1);
  if ( (*(_DWORD *)(v37 + 40) & 1) != 0 )
    GreUnlockVisRgn(v37);
  if ( v23 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v23);
  }
LABEL_19:
  v14 = v32;
  if ( v32 )
  {
    if ( (_DWORD)v33 && (*((_DWORD *)v32 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v33) )
      {
        v15 = XDCOBJ::GetUserAttr((XDCOBJ *)&v32);
        v14 = v32;
        if ( v15 )
        {
          DC::RestoreAttributes(v32, v15);
          v14 = v32;
        }
      }
      *((_DWORD *)v14 + 11) &= ~2u;
      v14 = v32;
      LODWORD(v33) = 0;
    }
    v36 = 0;
    v16 = *(_QWORD *)v14;
    HmgDecrementExclusiveReferenceCountEx(v14, HIDWORD(v33), &v36);
    if ( v36 )
      GrepDeleteDC(v16, 0x2000000LL);
  }
  return v13;
}
