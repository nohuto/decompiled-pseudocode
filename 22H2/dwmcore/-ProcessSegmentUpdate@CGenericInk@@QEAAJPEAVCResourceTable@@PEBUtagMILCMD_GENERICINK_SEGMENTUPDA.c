/*
 * XREFs of ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x1801C30E4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x180098E60 (--$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x1801894EC (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 */

__int64 __fastcall CGenericInk::ProcessSegmentUpdate(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_SEGMENTUPDATE *a3,
        const void *a4,
        unsigned int a5)
{
  __int64 v5; // r12
  CGenericInk *v7; // rbx
  unsigned int v8; // eax
  int v9; // edi
  __int64 v10; // rcx
  int v11; // r9d
  unsigned int v12; // r8d
  int v13; // r15d
  int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rbp
  unsigned int v17; // eax
  int v18; // esi
  int v19; // r13d
  unsigned int v20; // r15d
  unsigned int v21; // r13d
  unsigned int v22; // r14d
  __int64 v23; // r11
  __int128 *v24; // rcx
  unsigned int v26; // [rsp+20h] [rbp-78h]
  unsigned int v27; // [rsp+20h] [rbp-78h]
  __int128 v28; // [rsp+40h] [rbp-58h] BYREF

  v5 = 0LL;
  v7 = this;
  if ( *((_DWORD *)a3 + 3) )
  {
    v8 = a5 / *((_DWORD *)a3 + 3);
    if ( !v8 )
    {
      v26 = 497;
LABEL_7:
      v9 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, v26, 0LL);
      v27 = 48;
LABEL_8:
      v11 = v9;
LABEL_26:
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v11, v27, 0LL);
      return (unsigned int)v9;
    }
    this = (CGenericInk *)*((unsigned int *)this + 58);
    if ( (_DWORD)this )
    {
      if ( v8 != (_DWORD)this )
      {
        v26 = 505;
        goto LABEL_7;
      }
    }
    else
    {
      *((_DWORD *)v7 + 58) = v8;
    }
  }
  v12 = *((_DWORD *)v7 + 58);
  if ( v12 )
    v13 = *((_DWORD *)v7 + 56) / v12;
  else
    v13 = 0;
  *((_DWORD *)v7 + 56) = v12 * *((_DWORD *)a3 + 2);
  v14 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v7 + 200, a4, a5);
  v9 = v14;
  if ( v14 < 0 )
  {
    v11 = v14;
    v27 = 56;
    goto LABEL_26;
  }
  v15 = *((_DWORD *)a3 + 4);
  *((_DWORD *)v7 + 59) = v15;
  *((_DWORD *)v7 + 60) = *((_DWORD *)a3 + 5);
  v16 = (__int64)(*((_QWORD *)v7 + 19) - *((_QWORD *)v7 + 18)) >> 3;
  if ( (_DWORD)v16 )
  {
    v17 = *((_DWORD *)a3 + 3);
    v18 = *((_DWORD *)a3 + 2);
    v19 = v18 + v17;
    if ( v15 > v17 )
      v18 += v17 - v15;
    v20 = v13 - v18;
    v21 = v19 - v18;
    v22 = 0;
    v28 = 0LL;
    while ( 1 )
    {
      v24 = &v28;
      if ( v22 )
        v24 = 0LL;
      v23 = *(_QWORD *)(*(_QWORD *)(v5 + *((_QWORD *)v7 + 18)) + 80LL);
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, __int128 *))(*(_QWORD *)v23 + 48LL))(
             v23,
             v20,
             *((_QWORD *)v7 + 25) + (unsigned int)(v18 * *((_DWORD *)v7 + 58)),
             v21,
             *((_DWORD *)v7 + 59),
             *((_DWORD *)v7 + 58),
             v24);
      if ( v9 < 0 )
        break;
      ++v22;
      v5 += 8LL;
      if ( v22 >= (unsigned int)v16 )
      {
        CRegion::AppendRects<tagRECT>((const struct FastRegion::Internal::CRgnData **)v7 + 31, (__int64)&v28, 1u);
        goto LABEL_23;
      }
    }
    v27 = 91;
    goto LABEL_8;
  }
LABEL_23:
  (*(void (__fastcall **)(CGenericInk *, __int64))(*(_QWORD *)v7 + 72LL))(v7, 3LL);
  (*(void (__fastcall **)(CGenericInk *, __int64, CGenericInk *))(*(_QWORD *)v7 + 72LL))(v7, 1LL, v7);
  return (unsigned int)v9;
}
