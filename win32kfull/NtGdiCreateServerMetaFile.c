/*
 * XREFs of NtGdiCreateServerMetaFile @ 0x1C02D4AB0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtGdiCreateServerMetaFile(int a1, __int64 a2, char *a3, int a4, int a5, int a6)
{
  size_t v8; // r14
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx

  v8 = (unsigned int)a2;
  v10 = 0LL;
  if ( a1 != 1480934989 && a1 != 1599096397
    || !a3
    || (unsigned int)a2 > 0xFFFFFFCF
    || (unsigned __int64)(unsigned int)a2 + 48 > 0x2710000 )
  {
    return 0LL;
  }
  v11 = (unsigned int)(a2 + 48);
  LOBYTE(a2) = 21;
  v12 = HmgAlloc(v11, a2, 9LL);
  v13 = v12;
  if ( v12 )
  {
    v10 = *(_QWORD *)v12;
    *(_DWORD *)(v12 + 24) = a1;
    *(_DWORD *)(v12 + 28) = a4;
    *(_DWORD *)(v12 + 32) = a5;
    *(_DWORD *)(v12 + 36) = a6;
    *(_DWORD *)(v12 + 40) = v8;
    if ( (_DWORD)v8 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[v8] > MmUserProbeAddress || &a3[v8] < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove((void *)(v12 + 44), a3, v8);
    }
    if ( v10 )
      _InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
    else
      HmgFree(*(_QWORD *)v13);
  }
  return v10;
}
