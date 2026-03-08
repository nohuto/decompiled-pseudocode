/*
 * XREFs of ?ProcessPropertiesUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_PROPERTIESUPDATE@@PEBXI@Z @ 0x18022A6F4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x1801EBAAC (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 */

__int64 __fastcall CGenericInk::ProcessPropertiesUpdate(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_PROPERTIESUPDATE *a3,
        const void *a4,
        unsigned int a5)
{
  _QWORD *v5; // r15
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // esi
  unsigned int v10; // ebp
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx

  *((_DWORD *)this + 58) = 0;
  v5 = (_QWORD *)((char *)this + 208);
  v7 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)this + 208, a4, a5);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x16u, 0LL);
  }
  else
  {
    v10 = 0;
    v11 = (__int64)(*((_QWORD *)this + 22) - *((_QWORD *)this + 21)) >> 3;
    if ( (_DWORD)v11 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + v12) + 80LL);
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 40LL))(
                v13,
                *v5,
                *((unsigned int *)this + 58));
        v9 = v14;
        if ( v14 < 0 )
          break;
        ++v10;
        v12 += 8LL;
        if ( v10 >= (unsigned int)v11 )
          goto LABEL_6;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1Du, 0LL);
    }
    else
    {
LABEL_6:
      (*(void (__fastcall **)(CGenericInk *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
    }
  }
  return v9;
}
