__int64 __fastcall DxgMonitor::MonitorGammaState::GetCachedGammaRampForDiagnostics(
        DxgMonitor::MonitorGammaState *this,
        struct _DXGK_DIAG_BLACK_SCREEN_DXGKRNL_SAMPLED_GAMMA *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // esi
  int v6; // r9d
  _DWORD *v7; // r11
  unsigned int v8; // r10d
  __int64 v9; // rax
  char *v10; // r10
  __int64 v11; // r8
  __int64 v12; // r11
  __int64 v13; // rdx
  __int64 v14; // rbp
  float *v15; // r10
  unsigned int v16; // r8d
  unsigned int v17; // eax
  DXGFASTMUTEX *v19; // [rsp+30h] [rbp+8h] BYREF

  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v19, (DxgMonitor::MonitorGammaState *)((char *)this + 80));
  v4 = *((_QWORD *)this + 16);
  v5 = 0;
  if ( !v4 )
  {
    v6 = 1;
LABEL_15:
    *((_DWORD *)a2 + 57) = v6;
    goto LABEL_21;
  }
  switch ( *(_DWORD *)(v4 + 16) )
  {
    case 1:
      *((_DWORD *)a2 + 57) = 0;
      break;
    case 2:
      v15 = (float *)((char *)a2 + 132);
      v16 = 1;
      *(float *)a2 = (float)**(unsigned __int16 **)(v4 + 32);
      *((float *)a2 + 16) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 16) + 32LL) + 512LL);
      *((float *)a2 + 32) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 16) + 32LL) + 1024LL);
      do
      {
        v17 = 16 * v16;
        if ( 16 * v16 >= 0xFF )
          break;
        ++v16;
        *(v15 - 32) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 16) + 32LL) + 2LL * v17);
        *(v15 - 16) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 16) + 32LL) + 2LL * v17 + 512);
        *v15++ = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 16) + 32LL) + 2LL * v17 + 1024);
      }
      while ( v16 < 0xF );
      *((float *)a2 + 15) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 16) + 32LL) + 510LL);
      *((float *)a2 + 31) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 16) + 32LL) + 1022LL);
      *((float *)a2 + 47) = (float)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 16) + 32LL) + 1534LL);
      *((_DWORD *)a2 + 57) = 3;
      break;
    case 4:
      v7 = (_DWORD *)((char *)a2 + 132);
      v8 = 1;
      *(_DWORD *)a2 = *(_DWORD *)(*(_QWORD *)(v4 + 32) + 52LL);
      *((_DWORD *)a2 + 16) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 16) + 32LL) + 56LL);
      *((_DWORD *)a2 + 32) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 16) + 32LL) + 60LL);
      do
      {
        v9 = v8 << 8;
        if ( (unsigned int)v9 >= 0xFFF )
          break;
        ++v8;
        *(v7 - 32) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 16) + 32LL) + 12 * v9 + 52);
        *(v7 - 16) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 16) + 32LL) + 12 * v9 + 56);
        *v7++ = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 16) + 32LL) + 12LL * (unsigned int)v9 + 60);
      }
      while ( v8 < 0xF );
      v10 = (char *)a2 + 192;
      v11 = 0LL;
      v12 = 3LL;
      *((_DWORD *)a2 + 15) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 16) + 32LL) + 49192LL);
      *((_DWORD *)a2 + 31) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 16) + 32LL) + 49196LL);
      *((_DWORD *)a2 + 47) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 16) + 32LL) + 49200LL);
      do
      {
        v13 = v11;
        v14 = 3LL;
        do
        {
          *(_DWORD *)&v10[v13] = *(_DWORD *)(v13 + *(_QWORD *)(*((_QWORD *)this + 16) + 32LL));
          v13 += 4LL;
          --v14;
        }
        while ( v14 );
        v11 += 16LL;
        v10 -= 4;
        --v12;
      }
      while ( v12 );
      *((_DWORD *)a2 + 57) = 4;
      break;
    default:
      v5 = -1073741811;
      v6 = 2;
      goto LABEL_15;
  }
LABEL_21:
  MUTEX_LOCK::~MUTEX_LOCK(&v19);
  return v5;
}
