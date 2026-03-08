/*
 * XREFs of IopAddBugcheckPowerTriageData @ 0x140559780
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x14054F674 (IopAddBugcheckTriageDataFromParameters.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KiIsAddressRangeValid @ 0x1403849BC (KiIsAddressRangeValid.c)
 *     IopAddBugcheckTriageDevice @ 0x1405599D8 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageIrp @ 0x140559BD0 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x140559D4C (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x140559EE0 (IopAddBugcheckTriageWorkQueue.c)
 */

__int64 __fastcall IopAddBugcheckPowerTriageData(ULONG a1, __int64 a2, ULONG a3)
{
  int v5; // r15d
  unsigned int v6; // edi
  _QWORD **v7; // r14
  _QWORD *i; // rsi
  _QWORD **v9; // r14
  int v10; // r15d
  _QWORD *v11; // rsi

  v5 = 0;
  v6 = 0;
  IopAddBugcheckTriageDevice(a1);
  IopAddBugcheckTriageIrp(a3);
  if ( KiIsAddressRangeValid(a2, 40LL) && *(_WORD *)a2 == 0x8000 )
  {
    IoAddTriageDumpDataBlock(a2, (PVOID)0x28);
    v7 = *(_QWORD ***)(a2 + 8);
    if ( v7 )
    {
      if ( KiIsAddressRangeValid(*(_QWORD *)(a2 + 8), 16LL) )
      {
        IoAddTriageDumpDataBlock((ULONG)v7, (PVOID)0x10);
        for ( i = *v7; i && i != *(_QWORD **)(a2 + 8) && v5 < 10; i = (_QWORD *)*i )
        {
          ++v5;
          if ( !KiIsAddressRangeValid((__int64)i, 32LL) )
            goto LABEL_14;
          IoAddTriageDumpDataBlock((ULONG)i, (PVOID)0x20);
          if ( (_QWORD **)i[1] != v7 )
            goto LABEL_14;
          IopAddBugcheckTriageIrp(i[2]);
          IopAddBugcheckTriageDevice(i[3]);
          v7 = (_QWORD **)i;
        }
      }
      else
      {
LABEL_14:
        v6 = -1073741823;
      }
    }
    v9 = *(_QWORD ***)(a2 + 16);
    if ( v9 )
    {
      v10 = 0;
      if ( KiIsAddressRangeValid(*(_QWORD *)(a2 + 16), 16LL) )
      {
        IoAddTriageDumpDataBlock((ULONG)v9, (PVOID)0x10);
        v11 = *v9;
        if ( *v9 )
        {
          while ( v11 != *(_QWORD **)(a2 + 16) && v10 < 10 )
          {
            ++v10;
            if ( !KiIsAddressRangeValid((__int64)v11, 24LL) )
              goto LABEL_24;
            IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)0x18);
            if ( (_QWORD **)v11[1] != v9 )
              goto LABEL_24;
            v9 = (_QWORD **)v11;
            v6 = IopAddBugcheckTriageThread(v11[2]);
            v11 = (_QWORD *)*v11;
            if ( !v11 )
              break;
          }
        }
      }
      else
      {
LABEL_24:
        v6 = -1073741823;
      }
    }
    IopAddBugcheckTriageWorkQueue(*(_QWORD *)(a2 + 24));
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v6;
}
