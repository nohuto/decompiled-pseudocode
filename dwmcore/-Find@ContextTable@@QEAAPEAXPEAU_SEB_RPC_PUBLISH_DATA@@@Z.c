/*
 * XREFs of ?Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x1800FD23C
 * Callers:
 *     PubSebUnregisterRpc @ 0x1800FCE3C (PubSebUnregisterRpc.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x180279114 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 * Callees:
 *     ?FindKey@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEBAHAEBQEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x1800FD2B4 (-FindKey@-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLI.c)
 */

__int64 __fastcall ContextTable::Find(ContextTable *this, struct _SEB_RPC_PUBLISH_DATA *a2)
{
  __int64 v2; // rcx
  int Key; // eax
  __int64 v4; // rbx
  struct _SEB_RPC_PUBLISH_DATA *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  RtlAcquireSRWLockExclusive(&unk_1803E3290);
  Key = ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::FindKey(
          v2,
          &v6);
  if ( Key == -1 )
  {
    v4 = 0LL;
  }
  else
  {
    if ( Key < 0 || Key >= (int)qword_1803E3288 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      __debugbreak();
      JUMPOUT(0x1801900CELL);
    }
    v4 = *(_QWORD *)(*(&Block + 1) + 8LL * Key);
  }
  RtlReleaseSRWLockExclusive(&unk_1803E3290);
  return v4;
}
