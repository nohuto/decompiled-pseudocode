/*
 * XREFs of ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x180044720
 * Callers:
 *     ?GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z @ 0x18004459C (-GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044610 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800BBBB0 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::IncreaseWrittenByteCount(CDataStreamWriter *this, int a2)
{
  __int64 v2; // r8
  unsigned int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v2 = *((_QWORD *)this + 4);
  v3 = *(_DWORD *)(v2 + 20);
  if ( v3 + a2 < v3 )
  {
    *(_DWORD *)(v2 + 20) = -1;
    v7 = 583;
    goto LABEL_7;
  }
  *(_DWORD *)(v2 + 20) = v3 + a2;
  v4 = *((_DWORD *)this + 11) + a2;
  if ( v4 < *((_DWORD *)this + 11) )
  {
    *((_DWORD *)this + 11) = -1;
    v7 = 584;
LABEL_7:
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, v7, 0LL);
    return v5;
  }
  *((_DWORD *)this + 11) = v4;
  return 0;
}
