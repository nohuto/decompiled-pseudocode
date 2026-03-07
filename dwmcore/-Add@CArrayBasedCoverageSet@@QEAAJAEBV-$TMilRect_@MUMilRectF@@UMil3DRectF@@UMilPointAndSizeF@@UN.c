__int64 __fastcall CArrayBasedCoverageSet::Add(__int64 a1, __int128 *a2, int a3, const struct CMILMatrix *a4)
{
  __int128 v4; // xmm1
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // r8d
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v17[20]; // [rsp+40h] [rbp-28h]

  v4 = *a2;
  *(_DWORD *)v17 = a3;
  *(_OWORD *)&v17[4] = v4;
  v16 = 0LL;
  CZOrderedRect::UpdateDeviceRect((CZOrderedRect *)&v16, a4);
  v7 = *(unsigned int *)(a1 + 24);
  v8 = v7 + 1;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x25u, 0LL);
    return v9;
  }
  v9 = 0;
  if ( v8 > *(_DWORD *)(a1 + 20) )
  {
    v13 = DynArrayImpl<0>::AddMultipleAndSet(a1, 36, 1, &v16);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC0u, 0LL);
      goto LABEL_7;
    }
  }
  else
  {
    v11 = *(_QWORD *)a1;
    v12 = 9 * v7;
    *(_OWORD *)(v11 + 4 * v12) = v16;
    *(_OWORD *)(v11 + 4 * v12 + 16) = *(_OWORD *)v17;
    *(_DWORD *)(v11 + 4 * v12 + 32) = *(_DWORD *)&v17[16];
    *(_DWORD *)(a1 + 24) = v8;
  }
  return v9;
}
