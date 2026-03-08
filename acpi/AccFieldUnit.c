/*
 * XREFs of AccFieldUnit @ 0x1C0051630
 * Callers:
 *     <none>
 * Callees:
 *     AcquireGL @ 0x1C004ACB0 (AcquireGL.c)
 *     ReleaseGL @ 0x1C004CEA8 (ReleaseGL.c)
 *     ConPrintf @ 0x1C004D7B8 (ConPrintf.c)
 *     PrintObject @ 0x1C004E4C8 (PrintObject.c)
 *     HeapFree @ 0x1C004EE4C (HeapFree.c)
 *     NeedGlobalLock @ 0x1C00524B8 (NeedGlobalLock.c)
 *     PushAccFieldObj @ 0x1C00525E8 (PushAccFieldObj.c)
 *     ReadField @ 0x1C0052AE0 (ReadField.c)
 *     WriteField @ 0x1C0053090 (WriteField.c)
 */

__int64 __fastcall AccFieldUnit(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  int v6; // edx
  int *v7; // r14
  int v8; // edx
  int v9; // edx
  int v10; // eax
  __int64 v11; // r9
  int *v12; // r8
  __int64 v13; // rdx
  unsigned int Field; // eax
  __int64 v15; // rcx

  v3 = a3;
  if ( a3 )
    v6 = 3;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = *(int **)(*(_QWORD *)(a2 + 32) + 32LL);
  if ( !v6 )
  {
    ++*(_DWORD *)(a2 + 16);
    if ( *(_WORD *)(*(_QWORD *)v7 + 66LL) == 130 )
      return (unsigned int)PushAccFieldObj(
                             a1,
                             WriteFieldObj,
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 96LL) + 8LL) + 64LL,
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 96LL) + 8LL) + 96LL) + 8LL,
                             *(_QWORD *)(*(_QWORD *)v7 + 96LL) + 16LL,
                             8);
LABEL_11:
    ++*(_DWORD *)(a2 + 16);
    if ( (unsigned __int8)NeedGlobalLock(v7) )
    {
      v3 = AcquireGL(a1);
      if ( v3 )
        return v3;
    }
    goto LABEL_13;
  }
  v8 = v6 - 1;
  if ( !v8 )
    goto LABEL_11;
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return v3;
    goto LABEL_20;
  }
LABEL_13:
  v10 = *(_DWORD *)(a2 + 16) + 1;
  *(_DWORD *)(a2 + 16) = v10;
  if ( v7[5] < 0 )
  {
    v10 |= 0x20000u;
    *(_DWORD *)(a2 + 16) = v10;
  }
  v11 = *(_QWORD *)(a2 + 40);
  v12 = v7 + 2;
  v13 = *(_QWORD *)(a2 + 32);
  if ( (v10 & 0x10000) != 0 )
    Field = ReadField(a1, v13, v12, v11);
  else
    Field = WriteField(a1, v13, v12, v11);
  v3 = Field;
  if ( Field != 32772 && a2 == *(_QWORD *)(a1 + 416) )
  {
LABEL_20:
    if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 )
      ReleaseGL();
    if ( (gDebugger & 0xD0) != 0 && (*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
    {
      ConPrintf("=");
      PrintObject(*(_QWORD *)(a2 + 40));
    }
    v15 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v15 + 8);
    HeapFree(v15);
  }
  return v3;
}
