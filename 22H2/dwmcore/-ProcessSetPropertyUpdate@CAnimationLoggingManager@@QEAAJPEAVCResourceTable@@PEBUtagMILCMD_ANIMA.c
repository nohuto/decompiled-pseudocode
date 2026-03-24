/*
 * XREFs of ?ProcessSetPropertyUpdate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETPROPERTYUPDATE@@@Z @ 0x1801B1138
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8944 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetPropertyUpdate(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_SETPROPERTYUPDATE *a3)
{
  char *v3; // r10
  __int64 v4; // rax
  unsigned int v5; // r8d
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]

  v3 = (char *)this + 56;
  v12 = *(_QWORD *)((char *)a3 + 12);
  v13 = *((_DWORD *)a3 + 2);
  v4 = *((unsigned int *)this + 20);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
  {
    if ( v5 <= *((_DWORD *)this + 19) )
    {
      v8 = *(_QWORD *)v3;
      v9 = 3 * v4;
      *(_QWORD *)(v8 + 4 * v9) = v12;
      *(_DWORD *)(v8 + 4 * v9 + 8) = v13;
      *((_DWORD *)v3 + 6) = v5;
      return 0;
    }
    v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 12, 1, &v12);
    v6 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v10, 0xC0u, 0LL);
  }
  else
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x95u, 0LL);
    return (unsigned int)v6;
  }
  return 0;
}
