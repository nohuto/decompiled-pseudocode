__int64 __fastcall BmlLogDiagnosticsPacket(struct _KTHREAD **a1, int a2, __int64 a3, unsigned __int8 *a4)
{
  unsigned int v7; // ebp
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rbx
  DMMVIDPNTOPOLOGY *v11; // r12
  int v12; // eax
  unsigned int v13; // r15d
  __int64 i; // r13
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rcx
  struct DMMVIDPNPRESENTPATH *FirstPath; // rbp
  __int64 v19; // rdx
  DMMVIDPNTOPOLOGY *v21; // rcx
  _QWORD *v23; // [rsp+78h] [rbp+20h]

  v7 = 408 * *a4 + 64;
  v8 = operator new[](v7, 0x63644356u, 256LL);
  v9 = 0;
  v10 = v8;
  if ( v8 )
  {
    *(_DWORD *)v8 = 50;
    v11 = (DMMVIDPNTOPOLOGY *)(a3 + 96);
    *(_DWORD *)(v8 + 4) = v7;
    *(_DWORD *)(v8 + 40) = 0;
    *(_QWORD *)(v8 + 32) = 0LL;
    *(_OWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_DWORD *)(v8 + 48) = *a4;
    v12 = *((_DWORD *)a4 + 1);
    *(_DWORD *)(v10 + 56) = a2;
    v13 = 0;
    *(_DWORD *)(v10 + 52) = v12;
    for ( i = *(_QWORD *)(a3 + 48); v13 < *a4; ++v13 )
    {
      v15 = 120LL * v13;
      v16 = *(_QWORD *)&a4[v15 + 16];
      if ( (*(_QWORD *)v16 & 0x700000000000LL) == 0x700000000000LL )
      {
        v17 = 408LL * v13;
        *(_QWORD *)(v17 + v10 + 64) = *(_QWORD *)v16;
        *(_QWORD *)(v17 + v10 + 72) = *(_QWORD *)(v16 + 8);
        *(_QWORD *)(v17 + v10 + 80) = *(_QWORD *)(v16 + 16);
        *(_DWORD *)(v17 + v10 + 88) = *(_DWORD *)(v16 + 24);
        *(_DWORD *)(v17 + v10 + 92) = *(_DWORD *)(v16 + 28);
        *(_DWORD *)(v17 + v10 + 136) = *(_DWORD *)(v16 + 32);
        *(_QWORD *)(v17 + v10 + 104) = *(_QWORD *)(v16 + 36);
        *(_QWORD *)(v17 + v10 + 112) = *(_QWORD *)(v16 + 44);
        *(_QWORD *)(v17 + v10 + 120) = *(_QWORD *)(v16 + 52);
        *(_QWORD *)(v17 + v10 + 128) = *(_QWORD *)(v16 + 60);
        *(_QWORD *)(v17 + v10 + 96) = *(unsigned int *)(v16 + 72);
        *(_DWORD *)(v17 + v10 + 140) = (int)(*(_DWORD *)(v16 + 80) << 29) >> 29;
        *(_DWORD *)(v17 + v10 + 144) = *(_DWORD *)(v16 + 88);
        *(_DWORD *)(v17 + v10 + 148) = *(_DWORD *)(v16 + 92);
        *(_OWORD *)(v17 + v10 + 152) = *(_OWORD *)(v16 + 96);
        *(_OWORD *)(v17 + v10 + 168) = *(_OWORD *)(v16 + 112);
        *(_DWORD *)(v17 + v10 + 184) = *(_DWORD *)(v16 + 132);
        *(_DWORD *)(v17 + v10 + 188) = *(_DWORD *)(v16 + 136);
        *(_DWORD *)(v17 + v10 + 192) = *(_DWORD *)(v16 + 140);
        *(_QWORD *)(v17 + v10 + 196) = *(_QWORD *)(v16 + 144);
        *(_QWORD *)(v17 + v10 + 204) = *(_QWORD *)(v16 + 224);
        *(_DWORD *)(v17 + v10 + 220) = *(_DWORD *)(v16 + 240);
        *(_DWORD *)(v17 + v10 + 384) = *(_DWORD *)&a4[v15 + 24];
        *(_DWORD *)(v17 + v10 + 388) = *(_DWORD *)&a4[v15 + 28];
        *(_WORD *)(v17 + v10 + 392) = *(_WORD *)&a4[v15 + 32];
        *(_QWORD *)(v17 + v10 + 396) = *(_QWORD *)&a4[v15 + 36];
        *(_QWORD *)(v17 + v10 + 404) = *(_QWORD *)&a4[v15 + 44];
        *(_QWORD *)(v17 + v10 + 412) = *(_QWORD *)&a4[v15 + 52];
        *(_DWORD *)(v17 + v10 + 420) = *(_DWORD *)&a4[v15 + 60];
        *(_WORD *)(v17 + v10 + 424) = *(_WORD *)&a4[v15 + 64];
        *(_WORD *)(v17 + v10 + 426) = *(_WORD *)&a4[v15 + 66];
        *(_WORD *)(v17 + v10 + 428) = *(_WORD *)&a4[v15 + 68];
        *(_WORD *)(v17 + v10 + 430) = *(_WORD *)&a4[v15 + 70];
        *(_DWORD *)(v17 + v10 + 432) = *(_DWORD *)&a4[v15 + 72];
        *(_DWORD *)(v17 + v10 + 436) = *(_DWORD *)&a4[v15 + 76];
        *(_DWORD *)(v17 + v10 + 440) = *(_DWORD *)&a4[v15 + 80];
        *(_DWORD *)(v17 + v10 + 444) = *(_DWORD *)&a4[v15 + 84];
        *(_DWORD *)(v17 + v10 + 448) = *(_DWORD *)&a4[v15 + 88];
        *(_DWORD *)(v17 + v10 + 456) = *(_DWORD *)&a4[v15 + 96];
        *(_DWORD *)(v17 + v10 + 452) = *(_DWORD *)&a4[v15 + 92];
        *(_DWORD *)(v17 + v10 + 464) = *(_DWORD *)&a4[v15 + 104];
        *(_DWORD *)(v17 + v10 + 460) = *(_DWORD *)&a4[v15 + 100];
        *(_QWORD *)(v17 + v10 + 240) = *(_QWORD *)(v16 + 16);
        *(_DWORD *)(v17 + v10 + 248) = *(_DWORD *)(v16 + 24);
        *(_DWORD *)(v17 + v10 + 252) = *(_DWORD *)(v16 + 28);
        v23 = (_QWORD *)(v17 + v10 + 224);
        *v23 = 0x700000000000LL;
        FirstPath = DMMVIDPNTOPOLOGY::GetFirstPath(v11);
        if ( FirstPath )
        {
          while ( 1 )
          {
            if ( !*(_QWORD *)(i + 8) )
              WdLogSingleEntry0(1LL);
            v19 = *(_QWORD *)(i + 8);
            if ( *(_DWORD *)(v16 + 16) == *(_DWORD *)(*(_QWORD *)(v19 + 16) + 404LL) )
            {
              if ( !v19 )
                WdLogSingleEntry0(1LL);
              if ( *(_DWORD *)(v16 + 20) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 16LL) + 408LL)
                && *(_DWORD *)(v16 + 24) == *(_DWORD *)(*((_QWORD *)FirstPath + 11) + 24LL)
                && *(_DWORD *)(v16 + 28) == *(_DWORD *)(*((_QWORD *)FirstPath + 12) + 24LL) )
              {
                break;
              }
            }
            v21 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)FirstPath + 1);
            FirstPath = (DMMVIDPNTOPOLOGY *)((char *)v21 - 8);
            if ( v21 == (DMMVIDPNTOPOLOGY *)((char *)v11 + 24) )
              FirstPath = 0LL;
            if ( !FirstPath )
              goto LABEL_14;
          }
          _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3>((__int64)FirstPath, (__int64)v23);
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, v13, v16);
      }
LABEL_14:
      ;
    }
    VIDPN_MGR::WriteDiagEntry(a1, (struct _DXGK_DIAG_HEADER *)v10);
  }
  else
  {
    WdLogSingleEntry2(6LL, a4, *a4);
    v9 = -1073741670;
  }
  operator delete((void *)v10);
  return v9;
}
