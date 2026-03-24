/*
 * XREFs of IopInitializeReserveIrps @ 0x140A6EBD4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3DF90 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x1402E5F20 (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_140C45E20 = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(a1, 42, 0);
  if ( IopReserveIrps )
  {
    dword_140C45D48 = 0;
    qword_140C45D60 = (__int64)&qword_140C45D58;
    qword_140C45D58 = (__int64)&qword_140C45D58;
    word_140C45D50 = 1;
    byte_140C45D52 = 6;
    dword_140C45D54 = 0;
    qword_140C45D68 = (PIRP)IopAllocateIrpWithExtension(v1, 42, 0);
    if ( qword_140C45D68 )
    {
      dword_140C45D70 = 0;
      qword_140C45D88 = (__int64)&qword_140C45D80;
      qword_140C45D80 = (__int64)&qword_140C45D80;
      word_140C45D78 = 1;
      byte_140C45D7A = 6;
      dword_140C45D7C = 0;
      qword_140C45D90 = (PIRP)IopAllocateIrpWithExtension(v2, 42, 0);
      if ( qword_140C45D90 )
      {
        dword_140C45D98 = 0;
        stru_140C45DA0.Header.WaitListHead.Blink = &stru_140C45DA0.Header.WaitListHead;
        v4 = 0;
        stru_140C45DA0.Header.WaitListHead.Flink = &stru_140C45DA0.Header.WaitListHead;
        LOWORD(stru_140C45DA0.Header.Lock) = 1;
        stru_140C45DA0.Header.Size = 6;
        stru_140C45DA0.Header.SignalState = 0;
        qword_140C45E18 = 0LL;
        while ( 1 )
        {
          IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(v3, 42, 0);
          v3 = (__int64)IrpWithExtension;
          if ( !IrpWithExtension )
            break;
          if ( v4 )
          {
            if ( v4 == 1 )
            {
              qword_140C45DE8 = IrpWithExtension;
            }
            else
            {
              *(_QWORD *)&IrpWithExtension->Type = qword_140C45E18;
              qword_140C45E18 = IrpWithExtension;
            }
          }
          else
          {
            Irp = IrpWithExtension;
          }
          if ( (unsigned int)++v4 >= 8 )
          {
            dword_140C45DC0 = 0;
            qword_140C45DE0 = (__int64)&qword_140C45DD8;
            result = 1;
            qword_140C45DD8 = (__int64)&qword_140C45DD8;
            stru_140C45E00.Header.WaitListHead.Blink = &stru_140C45E00.Header.WaitListHead;
            stru_140C45E00.Header.WaitListHead.Flink = &stru_140C45E00.Header.WaitListHead;
            dword_140C45DF0 = 0;
            qword_140C45DC8 = 0LL;
            qword_140C45DF8 = 0LL;
            word_140C45DD0 = 1;
            byte_140C45DD2 = 6;
            dword_140C45DD4 = 0;
            LOWORD(stru_140C45E00.Header.Lock) = 1;
            stru_140C45E00.Header.Size = 6;
            stru_140C45E00.Header.SignalState = 0;
            return result;
          }
        }
      }
    }
  }
  return 0;
}
