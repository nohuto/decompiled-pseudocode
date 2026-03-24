/*
 * XREFs of NtGdiEngDeleteSurface @ 0x1C015E8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0082FC8 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C008393C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C016B1FC (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall NtGdiEngDeleteSurface(HSURF a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // ebx
  int IsEnabledDeviceUsage; // eax
  void *v6; // rcx
  int v7; // edi
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v9, a1);
  v3 = v10;
  v4 = 1;
  if ( v10 && (*(_DWORD *)(v10 + 112) & 0x40000) != 0 )
  {
    if ( *(_QWORD *)(v10 + 144) )
    {
      IsEnabledDeviceUsage = Feature_2249667896__private_IsEnabledDeviceUsage(v2, v10);
      v6 = *(void **)(v10 + 144);
      if ( IsEnabledDeviceUsage )
        GrepUnsecureVirtualMemory(v6);
      else
        MmUnsecureVirtualMemory(v6);
      *(_QWORD *)(v10 + 144) = 0LL;
    }
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  SURFREF::~SURFREF((SURFREF *)v9, v3);
  if ( !v7 || !EngDeleteSurface(a1) )
    return 0;
  return v4;
}
