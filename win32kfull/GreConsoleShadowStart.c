__int64 __fastcall GreConsoleShadowStart(_QWORD *a1)
{
  PVOID v1; // rbp
  PVOID v3; // rbx
  __int64 v4; // rdi
  HANDLE v5; // rsi
  _QWORD *v6; // rdx
  __int64 result; // rax

  v1 = gConsoleShadowThinwireFileObject;
  v3 = gConsoleShadowVideoFileObject;
  v4 = gpConsoleShadowThinWireCache;
  v5 = ghConsoleShadowThinwireChannel;
  v6 = *(_QWORD **)(SGDGetSessionState(a1) + 32);
  v6[2527] = a1[1];
  v6[2528] = a1[2];
  v6[2530] = a1[4];
  v6[2529] = a1[3];
  result = 1LL;
  a1[1] = v3;
  a1[2] = v1;
  a1[4] = v4;
  a1[3] = v5;
  return result;
}
