int __fastcall VidSchiSerializeSchedulingLog(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  unsigned int v8; // edx
  __int64 v9; // rcx
  VIDMM_SCH_LOG *v10; // r10
  _DWORD *CpuVa; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r11d
  unsigned int v16; // ebx
  _DWORD *v17; // r14
  unsigned int v18; // edi
  int v19; // esi
  __int64 v21; // [rsp+20h] [rbp-88h]
  __int64 v22; // [rsp+28h] [rbp-80h]
  __int64 v23; // [rsp+50h] [rbp-58h]
  unsigned int v24; // [rsp+60h] [rbp-48h]
  int v25; // [rsp+B0h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 24);
  v25 = VidSchiSchedulerNodeToDriverEngine(v6, *(unsigned __int16 *)(a1 + 4));
  v24 = VidSchiSchedulerNodeToDriverNode(v9, v8);
  CpuVa = VIDMM_SCH_LOG::GetCpuVa(v10);
  v16 = 0;
  v17 = CpuVa;
  v18 = CpuVa[2];
  if ( CpuVa[1] || (v18 = *CpuVa) != 0 )
  {
    do
    {
      v19 = 1536;
      LODWORD(CpuVa) = v18 - v16;
      if ( v18 - v16 < 0x600 )
        v19 = v18 - v16;
      if ( (byte_1C00769C3 & 2) != 0 )
      {
        LODWORD(v23) = 32 * v19;
        LODWORD(v22) = v15;
        LODWORD(v21) = v12;
        LODWORD(CpuVa) = McTemplateK0pqqxxxxqbr7_EtwWriteTransfer(
                           (__int64)&v17[8 * v16 + 8],
                           v12,
                           v13,
                           *(_QWORD *)(v6 + 16),
                           v21,
                           v22,
                           v14,
                           a5,
                           a4,
                           a6,
                           v23,
                           &v17[8 * v16 + 8]);
        v14 = a3;
        v15 = v25;
        v12 = v24;
      }
      v16 += v19;
    }
    while ( v16 < v18 );
  }
  return (int)CpuVa;
}
