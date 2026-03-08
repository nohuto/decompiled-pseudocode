/*
 * XREFs of ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1800D6CFC
 * Callers:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180043B74 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::BeginItem(CDataStreamWriter *this)
{
  CDataStreamWriter *v1; // rdx
  _DWORD *v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rcx
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v1 = this;
  if ( *((_QWORD *)this + 6)
    || *((_DWORD *)this + 14)
    || (this = (CDataStreamWriter *)*((_QWORD *)this + 4),
        (unsigned int)(*((_DWORD *)this + 4) - *((_DWORD *)this + 5)) < 4) )
  {
    v7 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147418113, 0x89u, 0LL);
    return v7;
  }
  v2 = (_DWORD *)((char *)this + *((unsigned int *)this + 5) + 24);
  v3 = *((_DWORD *)v1 + 14);
  *((_QWORD *)v1 + 6) = v2;
  *v2 = v3;
  v4 = *((_QWORD *)v1 + 4);
  *((_DWORD *)v1 + 14) = 4;
  v5 = *(_DWORD *)(v4 + 20);
  if ( v5 + 4 < v5 )
  {
    *(_DWORD *)(v4 + 20) = -1;
    v10 = 583;
    goto LABEL_10;
  }
  *(_DWORD *)(v4 + 20) = v5 + 4;
  v6 = *((_DWORD *)v1 + 11);
  v4 = v6 + 4;
  if ( (unsigned int)v4 < v6 )
  {
    *((_DWORD *)v1 + 11) = -1;
    v10 = 584;
LABEL_10:
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024362, v10, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, 0x9Au, 0LL);
    return v7;
  }
  *((_DWORD *)v1 + 11) = v4;
  return 0;
}
