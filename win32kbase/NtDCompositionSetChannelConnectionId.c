/*
 * XREFs of NtDCompositionSetChannelConnectionId @ 0x1C005BFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005F334 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetChannelConnectionId(unsigned int a1, int a2, __int64 a3)
{
  int v5; // ebx
  struct DirectComposition::CApplicationChannel *v6; // rcx
  __int64 v7; // rdx
  char v8; // al
  char v9; // al
  struct DirectComposition::CApplicationChannel *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  v5 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v11);
  if ( v5 >= 0 )
  {
    v6 = v11;
    v5 = 0;
    v7 = a2 != 0 ? 8 : 0;
    if ( a3 && *(_QWORD *)((char *)v11 + v7 + 2656) )
    {
      v5 = -1073741790;
    }
    else
    {
      *(_QWORD *)((char *)v11 + v7 + 2656) = a3;
      v8 = *((_BYTE *)v6 + 241);
      if ( a2 )
        v9 = v8 | 2;
      else
        v9 = v8 | 1;
      *((_BYTE *)v6 + 241) = v9;
    }
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v6)(v6);
  }
  return (unsigned int)v5;
}
