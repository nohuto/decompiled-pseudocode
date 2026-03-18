/*
 * XREFs of IopInitializeReserveIrps @ 0x140B6F224
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14028FCA0 (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_140C5DCE0 = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(a1, 42, 0);
  if ( IopReserveIrps )
  {
    dword_140C5DC08 = 0;
    qword_140C5DC20 = (__int64)&qword_140C5DC18;
    qword_140C5DC18 = (__int64)&qword_140C5DC18;
    word_140C5DC10 = 1;
    byte_140C5DC12 = 6;
    dword_140C5DC14 = 0;
    qword_140C5DC28 = (PIRP)IopAllocateIrpWithExtension(v1, 42, 0);
    if ( qword_140C5DC28 )
    {
      dword_140C5DC30 = 0;
      qword_140C5DC48 = (__int64)&qword_140C5DC40;
      qword_140C5DC40 = (__int64)&qword_140C5DC40;
      word_140C5DC38 = 1;
      byte_140C5DC3A = 6;
      dword_140C5DC3C = 0;
      qword_140C5DC50 = (PIRP)IopAllocateIrpWithExtension(v2, 42, 0);
      if ( qword_140C5DC50 )
      {
        dword_140C5DC58 = 0;
        stru_140C5DC60.Header.WaitListHead.Blink = &stru_140C5DC60.Header.WaitListHead;
        v4 = 0;
        stru_140C5DC60.Header.WaitListHead.Flink = &stru_140C5DC60.Header.WaitListHead;
        LOWORD(stru_140C5DC60.Header.Lock) = 1;
        stru_140C5DC60.Header.Size = 6;
        stru_140C5DC60.Header.SignalState = 0;
        qword_140C5DCD8 = 0LL;
        while ( 1 )
        {
          IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(v3, 42, 0);
          v3 = (__int64)IrpWithExtension;
          if ( !IrpWithExtension )
            return 0;
          if ( !v4 )
            break;
          if ( v4 == 1 )
          {
            qword_140C5DCA8 = IrpWithExtension;
LABEL_11:
            ++v4;
          }
          else
          {
            ++v4;
            *(_QWORD *)&IrpWithExtension->Type = qword_140C5DCD8;
            qword_140C5DCD8 = IrpWithExtension;
            if ( v4 >= 8 )
            {
              dword_140C5DC80 = 0;
              qword_140C5DCA0 = (__int64)&qword_140C5DC98;
              result = 1;
              qword_140C5DC98 = (__int64)&qword_140C5DC98;
              stru_140C5DCC0.Header.WaitListHead.Blink = &stru_140C5DCC0.Header.WaitListHead;
              stru_140C5DCC0.Header.WaitListHead.Flink = &stru_140C5DCC0.Header.WaitListHead;
              dword_140C5DCB0 = 0;
              qword_140C5DC88 = 0LL;
              qword_140C5DCB8 = 0LL;
              word_140C5DC90 = 1;
              byte_140C5DC92 = 6;
              dword_140C5DC94 = 0;
              LOWORD(stru_140C5DCC0.Header.Lock) = 1;
              stru_140C5DCC0.Header.Size = 6;
              stru_140C5DCC0.Header.SignalState = 0;
              return result;
            }
          }
        }
        Irp = IrpWithExtension;
        goto LABEL_11;
      }
    }
  }
  return 0;
}
