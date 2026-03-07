__int64 __fastcall xxxCallHandleMenuMessages(__int64 a1, __int64 *a2, int a3, __int64 a4, __int64 a5)
{
  int v5; // r10d
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // edi
  int v13; // edx
  __int64 *v15[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+38h] [rbp-28h]
  int v18; // [rsp+3Ch] [rbp-24h]
  __int64 v19; // [rsp+40h] [rbp-20h]
  __int64 v20; // [rsp+48h] [rbp-18h]
  __int128 v21; // [rsp+50h] [rbp-10h]

  v5 = *(_DWORD *)(a1 + 8);
  v18 = 0;
  v21 = 0LL;
  if ( (v5 & 0x4008) == 0x4008 )
  {
    MNCheckButtonDownState(a1);
    v5 = *(_DWORD *)(a1 + 8);
  }
  if ( a2 )
    v16 = *a2;
  else
    v16 = 0LL;
  v17 = a3;
  v19 = a4;
  if ( (unsigned int)(a3 - 512) > 0xE )
    v10 = a5;
  else
    v10 = ((unsigned __int16)(*(_WORD *)(a2[5] + 108) + WORD1(a5)) << 16) | (unsigned __int16)(*(_WORD *)(a2[5] + 104)
                                                                                             + a5);
  v11 = *(_QWORD *)a1;
  v20 = v10;
  *(_DWORD *)(a1 + 8) = v5 | 0x200;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v15, v11);
  v12 = xxxHandleMenuMessages((__int64)&v16, a1, v15);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15);
  v13 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v13 & 0xFFFFFDFF;
  if ( v12 && (v13 & 0x100) != 0 && ((v13 & 4) == 0 || (**(_DWORD **)a1 & 0x8000) != 0) )
  {
    xxxEndMenuLoop(a1, *(_QWORD *)a1);
    xxxMNEndMenuState(a1);
  }
  return v12;
}
