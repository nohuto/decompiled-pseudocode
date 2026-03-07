void __fastcall _TTUpdateBestTarget(
        struct tagPNTRWINDOWHITTTESTARGS *a1,
        struct tagWND *a2,
        int a3,
        const struct tagPOINT *a4,
        struct tagRECT *a5,
        int a6,
        struct tagRECT *a7,
        __int16 a8)
{
  struct tagRECT *v9; // rax
  struct tagRECT *v10; // rdi
  int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  const struct _D3DMATRIX *v16; // rcx

  *((_QWORD *)a1 + 7) = *(_QWORD *)a2;
  v9 = a5;
  *((_DWORD *)a1 + 16) = a3;
  if ( !a5 )
    v9 = (struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL);
  v10 = (struct tagRECT *)((char *)a1 + 68);
  *(struct tagRECT *)((char *)a1 + 68) = *v9;
  if ( a4 )
    *((struct tagPOINT *)a1 + 6) = *a4;
  v11 = *((_DWORD *)a1 + 44);
  if ( a6 )
    v12 = v11 | 1;
  else
    v12 = v11 & 0xFFFFFFFE;
  v13 = v12;
  v14 = v12 | 2;
  v15 = v13 & 0xFFFFFFFD;
  if ( a8 != 3 )
    v14 = v15;
  *((_DWORD *)a1 + 44) = v14;
  if ( !(unsigned int)IsCompositionInputWindow(a2)
    && !(unsigned int)IntersectRect(v10, &v10->left, &a7->left)
    && !gbIgnoreStressedOutStuff )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2245);
  }
  if ( *((_DWORD *)a1 + 21) )
  {
    v16 = (const struct _D3DMATRIX *)*((_QWORD *)a1 + 12);
    if ( v16 )
    {
      *((_DWORD *)a1 + 12) = (int)(float)((float)*((int *)a1 + 12) * v16->_11);
      *((_DWORD *)a1 + 13) = (int)(float)((float)*((int *)a1 + 13) * v16->_22);
      TransformRect(v16, v10, 0);
    }
  }
}
