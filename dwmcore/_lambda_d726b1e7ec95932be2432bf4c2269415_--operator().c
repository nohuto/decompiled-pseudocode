char __fastcall lambda_d726b1e7ec95932be2432bf4c2269415_::operator()(
        CProcessResourceAttributionReporter::HighResourceUsageReport ***a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        char a6,
        _DWORD *a7)
{
  int v7; // r13d
  int v8; // edi
  int v9; // esi
  int v10; // r14d
  int v11; // r15d
  int v12; // r12d
  _OWORD *v13; // rax
  int v14; // ebx
  bool v15; // zf
  CProcessResourceAttributionReporter::HighResourceUsageReport **v16; // rbx
  unsigned int v17; // edx
  CProcessResourceAttributionReporter::HighResourceUsageReport *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  CProcessResourceAttributionReporter::HighResourceUsageReport ***v28; // [rsp+30h] [rbp-79h] BYREF
  __int64 v29; // [rsp+38h] [rbp-71h]
  _OWORD v30[4]; // [rsp+48h] [rbp-61h] BYREF
  __int128 v31; // [rsp+88h] [rbp-21h]
  __int128 v32; // [rsp+98h] [rbp-11h]
  __int64 v33; // [rsp+A8h] [rbp-1h]

  v29 = a4;
  v28 = a1;
  v7 = a7[17];
  v8 = a7[20];
  v9 = a7[16];
  v10 = a7[19];
  v11 = a7[15];
  v12 = a7[18];
  LOBYTE(v13) = v7 > 5000 || v11 > 500 || v8 > 1000 || v9 > 10000 || v10 > 200 || v12 > 1000;
  v14 = a6 & 0x20;
  if ( (_BYTE)v13 || (a6 & 0x20) != 0 )
  {
    memset_0(v30, 0, 0x68uLL);
    LODWORD(v30[0]) = a3;
    *((_QWORD *)&v30[0] + 1) = v29;
    LODWORD(v33) = v8;
    v15 = v14 == 0;
    LOBYTE(v13) = v14 != 0;
    *(_QWORD *)&v32 = __PAIR64__(v7, v9);
    HIDWORD(v31) = v11;
    v16 = *v28;
    *((_QWORD *)&v32 + 1) = __PAIR64__(v10, v12);
    HIDWORD(v33) = !v15;
    if ( *v16 )
      goto LABEL_15;
    v13 = operator new(0x30uLL);
    if ( v13 )
    {
      *v13 = 0LL;
      v13[1] = 0LL;
      v13[2] = 0LL;
      *((_QWORD *)v13 + 3) = 0LL;
      *((_QWORD *)v13 + 4) = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    if ( v16 == (CProcessResourceAttributionReporter::HighResourceUsageReport **)&v28 )
    {
      if ( !v13 )
      {
LABEL_15:
        v19 = (__int64)*v16 + 16;
        v20 = *((_QWORD *)*v16 + 3);
        if ( v20 == *((_QWORD *)*v16 + 4) )
        {
          LOBYTE(v13) = std::vector<CProcessResourceAttributionReporter::ProcessResourceUsageRecord>::_Emplace_reallocate<CProcessResourceAttributionReporter::ProcessResourceUsageRecord const &>(
                          v19,
                          v20,
                          v30);
        }
        else
        {
          v21 = v30[1];
          *(_OWORD *)v20 = v30[0];
          v22 = v30[2];
          *(_OWORD *)(v20 + 16) = v21;
          v23 = v30[3];
          *(_OWORD *)(v20 + 32) = v22;
          v24 = v31;
          *(_OWORD *)(v20 + 48) = v23;
          v25 = v32;
          *(_OWORD *)(v20 + 64) = v24;
          *(_QWORD *)&v24 = v33;
          *(_OWORD *)(v20 + 80) = v25;
          *(_QWORD *)(v20 + 96) = v24;
          *(_QWORD *)(v19 + 8) += 104LL;
        }
        return (char)v13;
      }
      v18 = (CProcessResourceAttributionReporter::HighResourceUsageReport *)v13;
    }
    else
    {
      v18 = *v16;
      *v16 = (CProcessResourceAttributionReporter::HighResourceUsageReport *)v13;
      if ( !v18 )
        goto LABEL_15;
    }
    LOBYTE(v13) = (unsigned __int8)CProcessResourceAttributionReporter::HighResourceUsageReport::`scalar deleting destructor'(
                                     v18,
                                     v17);
    goto LABEL_15;
  }
  return (char)v13;
}
