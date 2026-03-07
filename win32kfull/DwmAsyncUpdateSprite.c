__int64 __fastcall DwmAsyncUpdateSprite(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int128 *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  unsigned int v15; // r15d
  _BYTE *v16; // rcx
  int v17; // eax
  __int128 v18; // xmm0
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // rax
  __int64 v29; // r8
  __int64 v30; // rax
  _OWORD *v31; // rdx
  unsigned int v32; // eax
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v34; // [rsp+34h] [rbp-CCh]
  __int128 v35; // [rsp+58h] [rbp-A8h]
  _BYTE v36[160]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v37[20]; // [rsp+108h] [rbp+8h]

  v15 = -1073741823;
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(Object) + 32) + 13248LL));
  if ( Object )
  {
    memset_0(&v33, 0, 0xECuLL);
    v33 = 15466692;
    LODWORD(v35) = 1073741830;
    v34 = 0x8000;
    *(_QWORD *)((char *)&v35 + 4) = a2;
    *(_QWORD *)&v36[152] = a3;
    HIDWORD(v35) = a4 & 0xFFFFFEFF;
    if ( a5 )
    {
      v17 = *(_DWORD *)(a5 + 8);
      *(_QWORD *)&v36[140] = *(_QWORD *)a5;
      *(_DWORD *)&v36[148] = v17;
    }
    if ( a6 )
    {
      v18 = *a6;
      v19 = *((_QWORD *)a6 + 16);
      v16 = &v36[4];
      v20 = a6[1];
      *(_DWORD *)v36 = 1;
      *(_OWORD *)&v36[4] = v18;
      v21 = a6[2];
      *(_OWORD *)&v36[20] = v20;
      v22 = a6[3];
      *(_OWORD *)&v36[36] = v21;
      v23 = a6[4];
      *(_OWORD *)&v36[52] = v22;
      v24 = a6[5];
      *(_OWORD *)&v36[68] = v23;
      v25 = a6[6];
      *(_OWORD *)&v36[84] = v24;
      v26 = a6[7];
      *(_OWORD *)&v36[100] = v25;
      *(_OWORD *)&v36[116] = v26;
      *(_QWORD *)&v36[132] = v19;
    }
    *(_DWORD *)v37 = a7;
    *(_DWORD *)&v37[4] = a8;
    *(_DWORD *)&v37[8] = a9;
    *(_QWORD *)&v37[12] = a11;
    v27 = SGDGetSessionState(v16);
    if ( a10 && (v29 = *(_QWORD *)(v27 + 32), v30 = *(unsigned int *)(v29 + 9316), (unsigned int)v30 < 0x14) )
    {
      v31 = (_OWORD *)(196 * v30 + v29 + 9320);
      *v31 = v35;
      v31[1] = *(_OWORD *)v36;
      v31[2] = *(_OWORD *)&v36[16];
      v31[3] = *(_OWORD *)&v36[32];
      v31[4] = *(_OWORD *)&v36[48];
      v31[5] = *(_OWORD *)&v36[64];
      v31[6] = *(_OWORD *)&v36[80];
      v31 += 8;
      *(v31 - 1) = *(_OWORD *)&v36[96];
      *v31 = *(_OWORD *)&v36[112];
      v31[1] = *(_OWORD *)&v36[128];
      v31[2] = *(_OWORD *)&v36[144];
      v31[3] = *(_OWORD *)v37;
      *((_DWORD *)v31 + 16) = *(_DWORD *)&v37[16];
      v32 = *(_DWORD *)(v29 + 9316) + 1;
      *(_DWORD *)(v29 + 9316) = v32;
      if ( v32 > *(_DWORD *)(v29 + 13240) )
        *(_DWORD *)(v29 + 13240) = v32;
    }
    else
    {
      EtwUpdateEvent(a2, 1073741830LL);
      v15 = LpcRequestPort(Object, &v33);
    }
    ObfDereferenceObject(Object);
  }
  return v15;
}
