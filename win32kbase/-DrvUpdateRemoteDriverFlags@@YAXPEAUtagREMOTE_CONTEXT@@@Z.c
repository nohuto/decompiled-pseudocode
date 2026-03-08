/*
 * XREFs of ?DrvUpdateRemoteDriverFlags@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C00D386C
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001FAC0 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

void __fastcall DrvUpdateRemoteDriverFlags(struct tagREMOTE_CONTEXT *a1)
{
  unsigned int v1; // ebx
  __int64 i; // r8
  int v4; // ecx
  unsigned int v5; // ecx

  v1 = 0;
  for ( i = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1264LL); i; i = *(_QWORD *)(i + 128) )
  {
    v4 = *(_DWORD *)(i + 160);
    if ( (v4 & 0x4000000) != 0 )
    {
      v5 = v4 & 0xFFFFFFFB;
      *(_DWORD *)(i + 160) = v5;
      *(_DWORD *)(i + 252) = v1 < *(_DWORD *)a1;
      if ( v1 == *((_DWORD *)a1 + 1) )
        *(_DWORD *)(i + 160) = v5 | 4;
      ++v1;
    }
  }
}
