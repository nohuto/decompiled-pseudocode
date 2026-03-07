void __fastcall CCpuClipAntialiasSink::GetAntialiasTemplateGeometry(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  float v4; // xmm0_4
  int v6; // esi
  __int64 v7; // rdi
  float v8; // xmm0_4
  unsigned __int16 v9; // cx
  int v10; // eax
  unsigned __int16 v11; // si
  __int64 v12; // r11
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // rdx
  int v16; // edx
  int v17; // ecx
  __int64 v18; // rax
  __int128 v19; // [rsp+20h] [rbp-18h]
  float Y; // [rsp+50h] [rbp+18h] BYREF

  v4 = *(float *)(a3 + 8);
  if ( v4 <= *(float *)(a3 + 4) )
  {
    *(_QWORD *)a4 = 0LL;
    *(_QWORD *)(a4 + 8) = 0LL;
    *(_QWORD *)(a4 + 16) = 0LL;
    *(_QWORD *)(a4 + 24) = 0LL;
    *(_QWORD *)(a4 + 32) = 0LL;
    *(_QWORD *)(a4 + 40) = 0LL;
    v19 = 0uLL;
  }
  else
  {
    v6 = (int)*(float *)(a3 + 4);
    v7 = *(_QWORD *)(a1 + 8LL * a2 + 40);
    v8 = modff(v4, &Y);
    v9 = (int)Y - 1;
    v10 = (unsigned __int16)v6;
    if ( COERCE_FLOAT(LODWORD(v8) & _xmm) >= 0.000081380211 )
      v9 = (int)Y;
    v11 = 2 * v6;
    v12 = v9 - v10 + 1;
    v13 = v11;
    v14 = 2 * v12 + 2;
    v15 = *(_QWORD *)(v7 + 48) + 8LL * v11;
    if ( !v15 && 2 * v12 != -2 )
      goto LABEL_11;
    *(_QWORD *)a4 = v14;
    *(_QWORD *)(a4 + 8) = v15;
    v16 = 8 * *(_DWORD *)(v7 + 16) + 16;
    *(_QWORD *)(a4 + 16) = *(_QWORD *)(v7 + 32) + v16 * v11;
    *(_DWORD *)(a4 + 24) = v16;
    *(_DWORD *)(a4 + 28) = v14;
    v17 = 8 * *(_DWORD *)(v7 + 16) + 16;
    v18 = *(_QWORD *)(v7 + 40) + v17 * v11;
    *(_DWORD *)(a4 + 40) = v17;
    v13 = 6 * v12;
    *(_QWORD *)(a4 + 32) = v18;
    *(_DWORD *)(a4 + 44) = v14;
    *(_QWORD *)&v19 = 6 * v12;
    *((_QWORD *)&v19 + 1) = *(_QWORD *)(v7 + 56);
    if ( !*((_QWORD *)&v19 + 1) )
    {
      if ( v13 )
      {
LABEL_11:
        gsl::details::terminate((gsl::details *)v13);
        JUMPOUT(0x18015B7D0LL);
      }
    }
  }
  *(_OWORD *)(a4 + 48) = v19;
}
