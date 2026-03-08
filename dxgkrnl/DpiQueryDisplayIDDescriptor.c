/*
 * XREFs of DpiQueryDisplayIDDescriptor @ 0x1C02192A4
 * Callers:
 *     ?GetDisplayIdDescriptor@KernelDriver@@UEBAJPEAIPEAE@Z @ 0x1C0219280 (-GetDisplayIdDescriptor@KernelDriver@@UEBAJPEAIPEAE@Z.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C01B473C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DpiQueryDisplayIDDescriptor(__int64 a1, unsigned int *a2, void *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 result; // rax
  char v12; // al
  unsigned int v13; // eax
  unsigned int v14; // ecx
  _DWORD v15[2]; // [rsp+30h] [rbp-40h] BYREF
  void *v16; // [rsp+38h] [rbp-38h]
  struct _DXGKARG_QUERYADAPTERINFO v17; // [rsp+40h] [rbp-30h] BYREF
  int v18; // [rsp+80h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 28LL);
  if ( v6 < 0x8001 )
    return 3223126017LL;
  v7 = *(_QWORD *)(v3 + 936);
  v8 = *(_QWORD *)(v7 + 104);
  if ( !v8 || v6 < 0xA00B )
    goto LABEL_3;
  v12 = *(_BYTE *)(v8 + 123);
  if ( v12 != 2 )
  {
    if ( v12 == 1 )
      return 3223126017LL;
LABEL_3:
    v18 = *(_DWORD *)(v7 + 24);
    v15[0] = *a2;
    v15[1] = 0;
    v17.pInputData = &v18;
    v16 = a3;
    v17.pOutputData = v15;
    *(_QWORD *)&v17.Type = 20LL;
    *(_QWORD *)&v17.InputDataSize = 4LL;
    *(_QWORD *)&v17.Flags.0 = 0LL;
    HIDWORD(v17.hKmdProcessHandle) = 0;
    v17.OutputDataSize = 16;
    KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
    v10 = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v5 + 3912), &v17, v9);
    KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
    result = v10;
    *a2 = v15[0];
    return result;
  }
  v13 = *(unsigned __int16 *)(v7 + 96);
  if ( !(_WORD)v13 )
    return 3223126017LL;
  if ( a3 )
  {
    v14 = *a2;
    if ( *a2 > v13 )
    {
      *a2 = v13;
      v14 = v13;
    }
    memmove(a3, *(const void **)(*(_QWORD *)(v3 + 936) + 120LL), v14);
    return 0LL;
  }
  else
  {
    *a2 = v13;
    return 3221225507LL;
  }
}
