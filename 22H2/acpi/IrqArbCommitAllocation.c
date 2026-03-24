/*
 * XREFs of IrqArbCommitAllocation @ 0x1C0093900
 * Callers:
 *     <none>
 * Callees:
 *     LinkNodeCopyData @ 0x1C00922F4 (LinkNodeCopyData.c)
 *     IrqArbpSetDeviceProperties @ 0x1C0092578 (IrqArbpSetDeviceProperties.c)
 *     IcCopyInputStateToDeviceState @ 0x1C00937A0 (IcCopyInputStateToDeviceState.c)
 *     PcisuppIsPciDevice @ 0x1C0093BD0 (PcisuppIsPciDevice.c)
 *     PcisuppWriteIntLine @ 0x1C0093D00 (PcisuppWriteIntLine.c)
 *     LinkNodeClearPossibleData @ 0x1C009429C (LinkNodeClearPossibleData.c)
 *     ProcessorCopyData @ 0x1C00944E0 (ProcessorCopyData.c)
 *     ProcessorpClearData @ 0x1C0094850 (ProcessorpClearData.c)
 *     IcClearPossibleData @ 0x1C0094980 (IcClearPossibleData.c)
 *     IcRemapInputs @ 0x1C00952A8 (IcRemapInputs.c)
 *     IrtRemapNewMsiAssignments @ 0x1C0095CE0 (IrtRemapNewMsiAssignments.c)
 *     LinkNodeWriteStateToHardware @ 0x1C0095F18 (LinkNodeWriteStateToHardware.c)
 *     IrtClearDeletedMsiMappings @ 0x1C0095F7C (IrtClearDeletedMsiMappings.c)
 */

__int64 __fastcall IrqArbCommitAllocation(__int64 a1)
{
  struct _RTL_RANGE_LIST *v2; // rcx
  PRTL_RANGE i; // rax
  _DWORD *UserData; // rax
  int IsPciDevice; // edi
  __int64 j; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  PRTL_RANGE k; // rcx
  _DWORD *v14; // rbx
  __int64 Start_low; // rdx
  struct _RTL_RANGE_LIST *v16; // rcx
  struct _RANGE_LIST_ITERATOR v18; // [rsp+20h] [rbp-40h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+40h] [rbp-20h] BYREF
  char v20; // [rsp+80h] [rbp+20h] BYREF
  PRTL_RANGE v21; // [rsp+88h] [rbp+28h] BYREF
  PRTL_RANGE Range; // [rsp+90h] [rbp+30h] BYREF

  v21 = 0LL;
  v20 = 0;
  Range = 0LL;
  v2 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
  memset(&v18, 0, sizeof(v18));
  memset(&Iterator, 0, sizeof(Iterator));
  RtlGetFirstRange(v2, &Iterator, &Range);
  for ( i = Range; Range; i = Range )
  {
    UserData = i->UserData;
    if ( UserData )
      UserData[1] &= ~8u;
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  IrtClearDeletedMsiMappings(a1);
  IsPciDevice = ProcessorCopyData(0LL);
  if ( IsPciDevice < 0 )
    goto LABEL_34;
  IsPciDevice = IcRemapInputs();
  if ( IsPciDevice < 0 )
    goto LABEL_34;
  IcCopyInputStateToDeviceState(a1, 1);
  for ( j = IcListHead; &IcListHead != (__int64 *)j; j = *(_QWORD *)j )
  {
    if ( *(int *)(j + 28) >= 0 && *(_DWORD *)(j + 20) - *(_DWORD *)(j + 16) != -1 )
    {
      v7 = j + 48;
      v8 = (unsigned int)(*(_DWORD *)(j + 20) - *(_DWORD *)(j + 16) + 1);
      do
      {
        *(_DWORD *)(v7 - 16) = *(_DWORD *)(v7 - 12);
        *(_DWORD *)(v7 - 8) = *(_DWORD *)(v7 - 4);
        *(_BYTE *)(v7 + 176) = *(_BYTE *)(v7 + 177);
        v9 = *(_OWORD *)(v7 + 104);
        *(_OWORD *)v7 = *(_OWORD *)(v7 + 88);
        v10 = *(_OWORD *)(v7 + 120);
        *(_OWORD *)(v7 + 16) = v9;
        v11 = *(_OWORD *)(v7 + 136);
        *(_OWORD *)(v7 + 32) = v10;
        v12 = *(_OWORD *)(v7 + 152);
        *(_OWORD *)(v7 + 48) = v11;
        *(_QWORD *)&v11 = *(_QWORD *)(v7 + 168);
        *(_OWORD *)(v7 + 64) = v12;
        *(_QWORD *)(v7 + 80) = v11;
        v7 += 200LL;
        --v8;
      }
      while ( v8 );
    }
  }
  ProcessorpClearData(1LL);
  IcClearPossibleData();
  IsPciDevice = LinkNodeWriteStateToHardware();
  if ( IsPciDevice < 0 )
    goto LABEL_34;
  IsPciDevice = LinkNodeCopyData(0);
  if ( IsPciDevice < 0 )
    goto LABEL_34;
  LinkNodeClearPossibleData();
  IsPciDevice = IrtRemapNewMsiAssignments(a1);
  if ( IsPciDevice < 0 )
    goto LABEL_34;
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &v18, &v21);
  for ( k = v21; v21; k = v21 )
  {
    if ( k->Owner && (k->Attributes & 1) == 0 )
    {
      v14 = k->UserData;
      if ( !v14 || (v14[1] & 0x10) == 0 )
      {
        IsPciDevice = PcisuppIsPciDevice(k->Owner, &v20);
        if ( IsPciDevice >= 0 && v20 )
        {
          if ( v21->Start <= 0xFF )
            Start_low = LOBYTE(v21->Start);
          else
            LOBYTE(Start_low) = 0;
          PcisuppWriteIntLine(v21->Owner, Start_low);
        }
        k = v21;
      }
      if ( v14 )
      {
        if ( (v14[1] & 1) != 0 )
        {
          Iterator = v18;
          IsPciDevice = IrqArbpSetDeviceProperties(k, (__int128 *)&Iterator);
          if ( IsPciDevice < 0 )
            goto LABEL_34;
        }
      }
    }
    RtlGetNextRange(&v18, &v21, 1u);
  }
  v16 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v16;
  RtlFreeRangeList(v16);
  ProcessorpClearData(1LL);
  IcClearPossibleData();
  LinkNodeClearPossibleData();
  if ( IsPciDevice < 0 )
LABEL_34:
    byte_1C0081748 = 0;
  return (unsigned int)IsPciDevice;
}
