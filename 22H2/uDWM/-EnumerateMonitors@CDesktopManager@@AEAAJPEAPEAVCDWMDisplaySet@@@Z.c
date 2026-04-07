/*
 * XREFs of ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180037788
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003720C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ @ 0x180085E58 (-CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x1800379A8 (-ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ.c)
 *     ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x180037A10 (-ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x180037AD8 (-Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180038358 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x180038B98 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18003A2F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAUHMONITOR__@@$0A@@@QEAAJPEFBQEAUHMONITOR__@@I@Z @ 0x180041BA8 (-AddMultipleAndSet@-$DynArray@PEAUHMONITOR__@@$0A@@@QEAAJPEFBQEAUHMONITOR__@@I@Z.c)
 *     ?IsUpToDate@CDWMDXGIEnumeration@@QEBA_NXZ @ 0x180056D88 (-IsUpToDate@CDWMDXGIEnumeration@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::EnumerateMonitors(CDesktopManager *this, struct CDWMDisplaySet **a2)
{
  struct CDWMDisplaySet *v2; // rax
  struct CDWMDXGIEnumeration **v4; // r14
  CDWMDisplaySet *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  _DWORD *v10; // rax
  struct CDWMDXGIEnumeration *v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned int v18; // [rsp+20h] [rbp-28h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct CDWMDisplaySet *)*((_QWORD *)this + 21);
  *a2 = v2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)v2);
  v4 = (struct CDWMDXGIEnumeration **)((char *)this + 160);
  do
  {
    if ( *v4 )
    {
      (*(void (__fastcall **)(struct CDWMDXGIEnumeration *))(*(_QWORD *)*v4 + 8LL))(*v4);
      *v4 = 0LL;
    }
    v5 = (CDWMDisplaySet *)*((_QWORD *)this + 21);
    if ( v5 )
    {
      CDWMDisplaySet::Release(v5);
      *((_QWORD *)this + 21) = 0LL;
    }
    v6 = CDWMDXGIEnumeration::Create(v4);
    v7 = v6;
    if ( v6 < 0 )
    {
      v18 = 1118;
      goto LABEL_32;
    }
    v8 = (_DWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     112LL);
    v9 = v8;
    if ( v8 )
    {
      v8[16] = 0;
      *v8 = 1;
      v10 = v8 + 18;
      *((_QWORD *)v9 + 5) = v10;
      *((_QWORD *)v9 + 6) = v10;
      v9[14] = 4;
      v9[15] = 4;
      v9[7] = 0;
      v9[6] = 0;
      v9[5] = 0;
      v9[4] = 0;
    }
    else
    {
      v9 = 0LL;
    }
    *((_QWORD *)this + 21) = v9;
    if ( !v9 )
    {
      v7 = -2147024882;
      v18 = 1121;
      goto LABEL_24;
    }
    v11 = *v4;
    *((_QWORD *)v9 + 1) = *v4;
    if ( v11 )
      (**(void (__fastcall ***)(struct CDWMDXGIEnumeration *))v11)(v11);
    v12 = CDWMDisplaySet::EnumerateOutputs((CDWMDisplaySet *)v9);
    v7 = v12;
    if ( v12 >= 0 )
    {
      v13 = CDWMDisplaySet::ArrangeCloneDisplays((CDWMDisplaySet *)v9);
      v7 = v13;
      if ( v13 >= 0 )
        CDWMDisplaySet::ComputeDisplayBounds((CDWMDisplaySet *)v9);
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CBF48, 1LL, v13, 0x78u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CBF48, 1LL, v12, 0x76u);
    }
  }
  while ( !CDWMDXGIEnumeration::IsUpToDate(*v4) );
  if ( (v7 & 0x80000000) != 0 )
  {
    v18 = 1125;
LABEL_24:
    v14 = v7;
    goto LABEL_33;
  }
  *((_DWORD *)this + 38) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 128, 8LL);
  v15 = *((_QWORD *)this + 21);
  v16 = 0LL;
  if ( !*(_DWORD *)(v15 + 64) )
    return v7;
  while ( 1 )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 40) + 8 * v16) + 88LL) + 16LL);
    v6 = DynArray<HMONITOR__ *,0>::AddMultipleAndSet((char *)this + 128, &v19);
    v7 = v6;
    if ( v6 < 0 )
      break;
    v15 = *((_QWORD *)this + 21);
    v16 = (unsigned int)(v16 + 1);
    if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 64) )
      return v7;
  }
  v18 = 1131;
LABEL_32:
  v14 = v6;
LABEL_33:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, v18);
  return v7;
}
