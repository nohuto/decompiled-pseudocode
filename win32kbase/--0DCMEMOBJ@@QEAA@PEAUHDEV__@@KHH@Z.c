DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, HDEV a2, unsigned int a3, int a4)
{
  struct HOBJ__ *v8; // rax
  struct HOBJ__ *v9; // rdi
  struct _W32THREAD *CurrentThread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r10
  __int64 v16; // r8
  _OWORD *v17; // rax
  _OWORD *v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  _OWORD *v21; // rcx
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int64 v24; // rax
  __int64 v25; // rax

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 4) = 0;
  if ( a3 <= 2 )
  {
    v8 = HmgAlloc(2184LL, 1u, 0x11u);
    *(_QWORD *)this = v8;
    v9 = v8;
    if ( v8 )
    {
      if ( *((_WORD *)v8 + 6) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      CurrentThread = (struct _W32THREAD *)W32GetCurrentThread();
      ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(CurrentThread);
      v12 = *(_QWORD *)this;
      *(_QWORD *)(*(_QWORD *)this + 2168LL) = ThreadCurrentObj;
      *(_DWORD *)(*(_QWORD *)this + 2176LL) = 0xFFFF;
      if ( a4 )
        HmgModifyHandleType(*(_QWORD *)v9 | 0x210000LL);
      v13 = SGDGetSessionState(v12);
      v14 = 3LL;
      v15 = 3LL;
      v16 = *(_QWORD *)(v13 + 24);
      v17 = (_OWORD *)((char *)v9 + 544);
      v18 = (_OWORD *)(v16 + 312);
      do
      {
        *v17 = *v18;
        v17[1] = v18[1];
        v17[2] = v18[2];
        v17[3] = v18[3];
        v17[4] = v18[4];
        v17[5] = v18[5];
        v17[6] = v18[6];
        v17 += 8;
        v19 = v18[7];
        v18 += 8;
        *(v17 - 1) = v19;
        --v15;
      }
      while ( v15 );
      *v17 = *v18;
      v17[1] = v18[1];
      v20 = v18[2];
      *((_QWORD *)v9 + 122) = (char *)v9 + 544;
      v21 = (_OWORD *)(v16 + 752);
      v17[2] = v20;
      v22 = (_OWORD *)((char *)v9 + 80);
      do
      {
        *v22 = *v21;
        v22[1] = v21[1];
        v22[2] = v21[2];
        v22[3] = v21[3];
        v22[4] = v21[4];
        v22[5] = v21[5];
        v22[6] = v21[6];
        v22 += 8;
        v23 = v21[7];
        v21 += 8;
        *(v22 - 1) = v23;
        --v14;
      }
      while ( v14 );
      *v22 = *v21;
      v22[1] = v21[1];
      v22[2] = v21[2];
      v22[3] = v21[3];
      v22[4] = v21[4];
      INC_SHARE_REF_CNT(*(unsigned int **)(*(_QWORD *)this + 136LL));
      INC_SHARE_REF_CNT(*(unsigned int **)(*(_QWORD *)this + 144LL));
      INC_SHARE_REF_CNT(*(unsigned int **)(*(_QWORD *)this + 96LL));
      *((_DWORD *)v9 + 8) = a3;
      *(_QWORD *)((char *)v9 + 36) = 0LL;
      *((_DWORD *)v9 + 11) = 0;
      *((_QWORD *)v9 + 149) = 0LL;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 152LL) = 1179679;
      v24 = *(_QWORD *)this + 176LL;
      *((_QWORD *)v9 + 220) = 0LL;
      *((_QWORD *)v9 + 157) = v24;
      *((_QWORD *)v9 + 174) = v24;
      *((_QWORD *)v9 + 191) = v24;
      *((_QWORD *)v9 + 208) = v24;
      *((_QWORD *)v9 + 218) = 0LL;
      *((_DWORD *)v9 + 438) = 0;
      *(_DWORD *)(*(_QWORD *)this + 2092LL) = -1;
      *(_WORD *)(*(_QWORD *)this + 2088LL) = -1;
      v25 = *(_QWORD *)this;
      *(_QWORD *)(v25 + 1112) = 0LL;
      *(_QWORD *)(v25 + 1120) = 0LL;
      *((_QWORD *)v9 + 142) = 0LL;
      *((_QWORD *)v9 + 259) = 0LL;
      *((_QWORD *)v9 + 260) = 0LL;
      *((_QWORD *)v9 + 6) = a2;
    }
  }
  return this;
}
