/*
 * XREFs of ?QueryInterface@GazeProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801890E0
 * Callers:
 *     ?QueryInterface@GazeProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004DC00 (-QueryInterface@GazeProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GazeProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004DC10 (-QueryInterface@GazeProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GazeProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004DC20 (-QueryInterface@GazeProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GazeProcessor@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004DC30 (-QueryInterface@GazeProcessor@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GazeProcessor@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004DC40 (-QueryInterface@GazeProcessor@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GazeProcessor::QueryInterface(GazeProcessor *this, const struct _GUID *a2, GazeProcessor **a3)
{
  GazeProcessor *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax

  v4 = this;
  if ( !a3 )
    return 2147942487LL;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v6 )
  {
    (*(void (__fastcall **)(GazeProcessor *))(*(_QWORD *)this + 8LL))(this);
    v4 = (GazeProcessor *)((char *)v4 + 40);
LABEL_11:
    *a3 = v4;
    return 0LL;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_3cc27501_dfa8_48b9_9841_43a516320b1d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3cc27501_dfa8_48b9_9841_43a516320b1d.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_3cc27501_dfa8_48b9_9841_43a516320b1d.Data4;
  if ( !v7 )
  {
    (*(void (__fastcall **)(GazeProcessor *))(*(_QWORD *)this + 8LL))(this);
    goto LABEL_11;
  }
  return 2147500034LL;
}
