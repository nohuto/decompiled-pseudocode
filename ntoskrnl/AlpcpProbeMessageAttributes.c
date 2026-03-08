/*
 * XREFs of AlpcpProbeMessageAttributes @ 0x140718308
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140717E20 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProbeMessageAttributes(int a1, volatile void *a2, char a3)
{
  __int64 v3; // r9
  __int64 v5; // rax
  ULONG v7; // r8d
  int v8; // ebx
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  ULONG v13; // eax
  bool v14; // zf
  unsigned int v15; // ecx
  __int64 v16; // rax
  ULONG v18; // eax
  ULONG v19; // ecx

  v3 = 0x7FFFFFFF0000LL;
  v5 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
    v5 = (__int64)a2;
  v7 = 8;
  v8 = *(_DWORD *)v5;
  if ( (a1 & 0xC0000000) == 0x80000000 )
  {
    if ( v8 < 0 )
      v7 = 20;
    v18 = v7 + 16;
    if ( (v8 & 0x40000000) == 0 )
      v18 = v7;
    v7 = 4;
    v19 = v18 + 20;
    if ( (v8 & 0x20000000) == 0 )
      v19 = v18;
    v13 = v19 + 16;
    if ( (v8 & 0x10000000) == 0 )
      v13 = v19;
    v14 = (v8 & 0x8000000) == 0;
    v15 = v13 + 24;
  }
  else
  {
    v9 = 8;
    if ( v8 < 0 )
      v9 = 32;
    v10 = v9 + 32;
    if ( (v8 & 0x40000000) == 0 )
      v10 = v9;
    v11 = v10 + 32;
    if ( (v8 & 0x20000000) == 0 )
      v11 = v10;
    v12 = v11 + 24;
    if ( (v8 & 0x10000000) == 0 )
      v12 = v11;
    v13 = v12 + 24;
    if ( (v8 & 0x8000000) == 0 )
      v13 = v12;
    v14 = (v8 & 0x4000000) == 0;
    v15 = v13 + 8;
  }
  if ( v14 )
    v15 = v13;
  v16 = v15 + 8;
  if ( (v8 & 0x2000000) == 0 )
    v16 = v15;
  if ( !a3 && (v8 & 0xA0000000) == 0 )
  {
    if ( !v16 || ((v7 - 1) & (unsigned int)a2) == 0 )
      return (unsigned int)v8;
LABEL_35:
    ExRaiseDatatypeMisalignment();
  }
  if ( !(_DWORD)v16 )
  {
    ProbeForWrite(a2, 0LL, v7);
    return (unsigned int)v8;
  }
  if ( ((v7 - 1) & (unsigned int)a2) != 0 )
    goto LABEL_35;
  if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
    v3 = (__int64)a2;
  *(_BYTE *)v3 = *(_BYTE *)v3;
  *(_BYTE *)(v3 + (unsigned int)v16 - 1) = *(_BYTE *)(v3 + (unsigned int)v16 - 1);
  return (unsigned int)v8;
}
