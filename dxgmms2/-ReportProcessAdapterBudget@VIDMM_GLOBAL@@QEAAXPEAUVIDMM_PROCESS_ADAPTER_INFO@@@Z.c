void __fastcall VIDMM_GLOBAL::ReportProcessAdapterBudget(VIDMM_GLOBAL *this, struct _KTHREAD **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // ebx
  unsigned __int8 v8; // di
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 *v11; // r15
  __int64 v12; // r13
  unsigned __int8 v13; // di
  _QWORD *v14; // r14
  __int64 v15; // [rsp+30h] [rbp-88h]
  __int64 v16; // [rsp+38h] [rbp-80h]
  __int64 v17; // [rsp+40h] [rbp-78h]
  _BYTE v18[8]; // [rsp+70h] [rbp-48h] BYREF
  DXGPUSHLOCK *v19; // [rsp+78h] [rbp-40h]
  int i; // [rsp+80h] [rbp-38h]
  __int64 v21; // [rsp+C0h] [rbp+8h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18, a2 + 45, 0);
  DXGPUSHLOCK::AcquireExclusive(v19);
  v7 = 0;
  for ( i = 2; v7 < *((_DWORD *)this + 1754); ++v7 )
  {
    v8 = 0;
    v9 = (__int64)a2[6] + 296 * v7;
    v10 = 1616LL * v7;
    v11 = (__int64 *)(v9 + 136);
    do
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 5028) + v10 + 520) & 2) != 0 )
      {
        v12 = *v11;
        LOBYTE(v5) = *((_BYTE *)a2 + 400);
        v21 = v11[8];
        if ( (byte_1C00769C1 & 0x10) != 0 )
        {
          LOBYTE(v4) = *((_BYTE *)a2 + 392);
          McTemplateK0xxpqhuuuuu_EtwWriteTransfer(v5, v4, v6);
          if ( (byte_1C00769C1 & 0x10) != 0 )
          {
            LOBYTE(v17) = v8;
            LOWORD(v16) = v7;
            LODWORD(v15) = *((_DWORD *)a2[5] + 2);
            McTemplateK0xxpqhu_EtwWriteTransfer(
              v5,
              &EventVidMmProcessUsageChange,
              v6,
              v12,
              v12,
              *((_QWORD *)this + 3),
              v15,
              v16,
              v17);
            if ( (byte_1C00769C1 & 0x10) != 0 )
            {
              LOBYTE(v17) = v8;
              LOWORD(v16) = v7;
              LODWORD(v15) = *((_DWORD *)a2[5] + 2);
              McTemplateK0xxpqhu_EtwWriteTransfer(
                v5,
                &EventVidMmProcessCommitmentChange,
                v6,
                v21,
                v21,
                *((_QWORD *)this + 3),
                v15,
                v16,
                v17);
            }
          }
        }
      }
      ++v8;
      ++v11;
      v10 += 24LL;
    }
    while ( v8 < 2u );
    if ( *(_QWORD *)(v9 + 152) && (byte_1C00769C1 & 0x10) != 0 )
      McTemplateK0xxpqhu_EtwWriteTransfer(v5, &EventVidMmProcessUsageChange, v6);
    v13 = 0;
    v14 = (_QWORD *)(v9 + 256);
    do
    {
      if ( *v14 && (byte_1C00769C1 & 0x10) != 0 )
        McTemplateK0xxpqhu_EtwWriteTransfer(v5, &EventVidMmProcessDemotedCommitmentChange, v6);
      ++v13;
      ++v14;
    }
    while ( v13 < 5u );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
}
