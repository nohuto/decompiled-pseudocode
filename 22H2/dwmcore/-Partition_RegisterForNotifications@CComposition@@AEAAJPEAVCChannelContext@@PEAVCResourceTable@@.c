/*
 * XREFs of ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x1800CF3C4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800368F8 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800522A0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800CF4A0 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x1800CF814 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_RegisterForNotifications(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS *a4)
{
  char *v6; // rcx
  struct CChannelContext **v7; // r8
  __int64 v8; // rax
  unsigned int v9; // r9d
  struct CChannelContext **v10; // rdx
  unsigned int v11; // edx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // ebx
  int v15; // eax
  unsigned int i; // eax
  int v18; // [rsp+30h] [rbp-28h] BYREF
  __int128 v19; // [rsp+34h] [rbp-24h]
  __int64 v20; // [rsp+44h] [rbp-14h]
  CDrawListEntry *v21; // [rsp+68h] [rbp+10h] BYREF

  v21 = a2;
  v6 = (char *)this + 392;
  v7 = *(struct CChannelContext ***)v6;
  if ( *((_BYTE *)a4 + 4) )
  {
    v8 = *((unsigned int *)v6 + 6);
    v9 = 0;
    if ( (_DWORD)v8 )
    {
      v10 = *(struct CChannelContext ***)v6;
      do
      {
        if ( a2 == *v10 )
          break;
        ++v9;
        ++v10;
      }
      while ( v9 < (unsigned int)v8 );
    }
    if ( v9 == *((_DWORD *)this + 104) )
    {
      v11 = v8 + 1;
      if ( (int)v8 + 1 < (unsigned int)v8 )
      {
        v14 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else
      {
        if ( v11 <= *((_DWORD *)v6 + 5) )
        {
          v7[v8] = a2;
          *((_DWORD *)v6 + 6) = v11;
LABEL_11:
          _InterlockedIncrement((volatile signed __int32 *)v21 + 2);
          v18 = 5;
          v20 = 0LL;
          v15 = *((_DWORD *)this + 82);
          v19 = 0LL;
          DWORD1(v19) = v15;
          DWORD2(v19) = v15;
          CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v18);
          return 0LL;
        }
        v12 = DynArrayImpl<1>::AddMultipleAndSet((__int64)v6, 8u, (__int64)v7, &v21);
        v14 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC0u, 0LL);
      }
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v14, 0x3CBu, 0LL);
        return 0LL;
      }
      goto LABEL_11;
    }
  }
  else
  {
    for ( i = 0; i < *((_DWORD *)v6 + 6); ++v7 )
    {
      if ( a2 == *v7 )
        break;
      ++i;
    }
    if ( i < *((_DWORD *)this + 104) && (unsigned int)DynArray<CChannelContext *,1>::Remove(v6, &v21, v7) )
      CDrawListEntry::Release(v21);
  }
  return 0LL;
}
