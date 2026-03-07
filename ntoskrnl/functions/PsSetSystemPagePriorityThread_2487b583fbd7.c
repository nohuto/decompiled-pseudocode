__int64 __fastcall PsSetSystemPagePriorityThread(__int64 a1, int a2)
{
  int v3; // edx
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  unsigned int v7; // eax
  bool v8; // zf

  --*(_WORD *)(a1 + 486);
  v3 = a2 << 9;
  v4 = *(_DWORD *)(a1 + 1384);
  v5 = *(unsigned __int8 *)(a1 + 1385);
  if ( (v5 & 1) != 0 )
  {
    v6 = (v5 >> 1) & 7;
    v7 = v4 & 0xFFFFF1FF;
  }
  else
  {
    v6 = -1;
    v7 = v4 | 0x100;
  }
  *(_DWORD *)(a1 + 1384) = v3 | v7;
  v8 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
  if ( v8 && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery();
  return v6;
}
