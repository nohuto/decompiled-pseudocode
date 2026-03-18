/*
 * XREFs of NtDCompositionSetChannelConnectionId @ 0x1C00B3850
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0010268 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetChannelConnectionId(unsigned int a1, int a2, __int64 a3)
{
  int v5; // ebx
  struct DirectComposition::CApplicationChannel *v6; // rcx
  __int64 v7; // rdx
  struct DirectComposition::CApplicationChannel *v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v5 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v9);
  if ( v5 >= 0 )
  {
    v6 = v9;
    v5 = 0;
    v7 = a2 != 0 ? 8 : 0;
    if ( a3 && *(_QWORD *)((char *)v9 + v7 + 1688) )
    {
      v5 = -1073741790;
    }
    else
    {
      *(_QWORD *)((char *)v9 + v7 + 1688) = a3;
      if ( a2 )
        *((_BYTE *)v6 + 241) |= 1u;
      else
        *((_BYTE *)v6 + 240) |= 0x80u;
    }
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v6)(v6);
  }
  return (unsigned int)v5;
}
