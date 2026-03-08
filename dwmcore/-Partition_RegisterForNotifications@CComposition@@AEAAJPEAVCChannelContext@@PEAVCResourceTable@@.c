/*
 * XREFs of ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x1800EB3D8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18002718C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x1800A9CF4 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800EB548 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_RegisterForNotifications(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS *a4)
{
  char *v4; // r8
  struct CChannelContext **v6; // r10
  unsigned int v7; // ecx
  __int64 v9; // rax
  struct CChannelContext **v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // ebx
  int v15; // eax
  __int64 v17; // rcx
  int v18; // [rsp+30h] [rbp-28h] BYREF
  __int128 v19; // [rsp+34h] [rbp-24h]
  __int64 v20; // [rsp+44h] [rbp-14h]
  volatile signed __int32 *v21; // [rsp+68h] [rbp+10h] BYREF

  v21 = (volatile signed __int32 *)a2;
  v4 = (char *)this + 544;
  v6 = (struct CChannelContext **)*((_QWORD *)this + 68);
  v7 = 0;
  v9 = *((unsigned int *)v4 + 6);
  if ( *((_BYTE *)a4 + 4) )
  {
    if ( (_DWORD)v9 )
    {
      v10 = v6;
      do
      {
        if ( a2 == *v10 )
          break;
        ++v7;
        ++v10;
      }
      while ( v7 < (unsigned int)v9 );
    }
    if ( v7 == *((_DWORD *)this + 142) )
    {
      v11 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v11 < (unsigned int)v9 )
      {
        v14 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else
      {
        if ( (unsigned int)v11 <= *((_DWORD *)v4 + 5) )
        {
          v6[v9] = a2;
          *((_DWORD *)v4 + 6) = v11;
          goto LABEL_10;
        }
        v12 = DynArrayImpl<1>::AddMultipleAndSet((__int64)v4, 8u, (__int64)v4, &v21);
        v14 = v12;
        if ( v12 >= 0 )
        {
LABEL_10:
          CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v21 + 2));
          v18 = 5;
          v20 = 0LL;
          v15 = *((_DWORD *)this + 118);
          v19 = 0LL;
          DWORD1(v19) = v15;
          DWORD2(v19) = v15;
          CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v18);
          return 0LL;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC0u, 0LL);
      }
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v14, 0x459u, 0LL);
    }
  }
  else
  {
    if ( (_DWORD)v9 )
    {
      do
      {
        if ( a2 == *v6 )
          break;
        ++v7;
        ++v6;
      }
      while ( v7 < (unsigned int)v9 );
    }
    if ( v7 < *((_DWORD *)this + 142) && (unsigned int)DynArray<CChannelContext *,1>::Remove((__int64 *)v4, &v21) )
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v21);
  }
  return 0LL;
}
