// write access to const memory has been detected, the output may be wrong!
LONG __fastcall EditionxxxComputeInputSinkInfo(__int64 a1, __int64 a2, __int64 a3)
{
  LONG result; // eax
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v11; // [rsp+40h] [rbp-C0h]
  __int128 v12; // [rsp+50h] [rbp-B0h]
  __int128 v13; // [rsp+60h] [rbp-A0h]
  __int128 v14; // [rsp+70h] [rbp-90h]
  __int128 v15; // [rsp+80h] [rbp-80h]
  __int128 v16; // [rsp+90h] [rbp-70h]
  _BYTE v17[112]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v18[112]; // [rsp+110h] [rbp+10h] BYREF

  result = IsInputThread(a1, a2, a3);
  if ( (_BYTE)result )
  {
    memset_0(&v10, 0, 0x50uLL);
    memset_0(v18, 0, sizeof(v18));
    LODWORD(v10) = *((_DWORD *)&gInputSinkInfoRetrieval + 3);
    v4 = *(_QWORD *)((char *)&gInputSinkInfoRetrieval + 4);
    v13 = 0uLL;
    DWORD2(v14) = 0;
    *(_QWORD *)((char *)&v11 + 4) = v4;
    *(_QWORD *)&v14 = 0xFFFFFFFE00000000uLL;
    result = DCompHitTest(v17, &v10, v18);
  }
  if ( !*((_DWORD *)&gInputSinkInfoRetrieval + 4) )
  {
    result = (unsigned int)memset_0(&v10, 0, 0x70uLL);
    gInputSinkInfoRetrieval = v10;
    v5 = v12;
    *((_OWORD *)&gInputSinkInfoRetrieval + 1) = v11;
    v6 = v13;
    *((_OWORD *)&gInputSinkInfoRetrieval + 2) = v5;
    v7 = v14;
    *((_OWORD *)&gInputSinkInfoRetrieval + 3) = v6;
    v8 = v15;
    *((_OWORD *)&gInputSinkInfoRetrieval + 4) = v7;
    v9 = v16;
    *((_OWORD *)&gInputSinkInfoRetrieval + 5) = v8;
    *((_OWORD *)&gInputSinkInfoRetrieval + 6) = v9;
  }
  if ( gbCompositionInputSinkQueryBlockedOnDIT )
    return KeSetEvent(*(PRKEVENT *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong, 1, 0);
  return result;
}
