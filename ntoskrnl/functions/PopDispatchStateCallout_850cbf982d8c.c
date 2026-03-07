__int64 __fastcall PopDispatchStateCallout(_DWORD *a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-40h]
  unsigned int v8; // [rsp+30h] [rbp-30h] BYREF
  int *v9; // [rsp+38h] [rbp-28h] BYREF
  int v10; // [rsp+40h] [rbp-20h]
  int v11; // [rsp+44h] [rbp-1Ch]
  _DWORD v12[4]; // [rsp+48h] [rbp-18h] BYREF

  if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
  {
    v6 = a1[1];
    v11 = 0;
    v12[0] = v6;
    v12[1] = a1[2];
    v12[2] = a1[3];
    v12[3] = a1[4];
    v9 = v12;
    v10 = 16;
    EtwTraceKernelEvent((__int64)&v9, 1u, 0x80008000, 0x1228u, 0x401802u);
  }
  v4 = PopInvokeWin32Callout(4LL, a1, 2 - (unsigned int)(a2 != 0), a2 & -(__int64)(a2 != 0), v7);
  if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
  {
    v11 = 0;
    v9 = (int *)&v8;
    v8 = v4;
    v10 = 4;
    EtwTraceKernelEvent((__int64)&v9, 1u, 0x80008000, 0x1229u, 0x401802u);
  }
  return v4;
}
