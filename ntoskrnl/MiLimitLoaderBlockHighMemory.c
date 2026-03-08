/*
 * XREFs of MiLimitLoaderBlockHighMemory @ 0x140B5FB90
 * Callers:
 *     MiMemoryLicense @ 0x140B5FAA0 (MiMemoryLicense.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024C010 (RtlRbRemoveNode.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiLimitLoaderBlockHighMemory(__int64 a1, ULONG_PTR a2)
{
  unsigned __int64 *v2; // rbp
  unsigned __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  ULONG_PTR v11; // r8
  ULONG_PTR v12; // r10
  _QWORD *v13; // rax
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rcx
  int v17; // eax

  v2 = (unsigned __int64 *)(a1 + 352);
  v3 = 0LL;
  v4 = KeFeatureBits & 0x2000000000LL;
  v6 = *(_QWORD *)(a1 + 360);
  if ( (v6 & 1) == 0 )
  {
    v7 = *(_QWORD **)(a1 + 360);
    goto LABEL_22;
  }
  if ( v6 != 1 )
  {
    v7 = (_QWORD *)(v6 ^ ((unsigned __int64)v2 | 1));
    while ( 1 )
    {
LABEL_22:
      if ( !v7 )
        return v3;
      v13 = (_QWORD *)v7[1];
      v14 = (unsigned __int64)v7;
      v15 = v7;
      if ( v13 )
      {
        v8 = (_QWORD *)*v13;
        v7 = (_QWORD *)v7[1];
        if ( *v13 )
        {
          do
          {
            v7 = v8;
            v8 = (_QWORD *)*v8;
          }
          while ( v8 );
        }
      }
      else
      {
        while ( 1 )
        {
          v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v7 || (_QWORD *)*v7 == v15 )
            break;
          v15 = v7;
        }
      }
      v9 = *(_DWORD *)(v14 + 24);
      if ( !v4 )
      {
        if ( v9 == 38 )
        {
          v9 = 24;
LABEL_34:
          *(_DWORD *)(v14 + 24) = v9;
LABEL_10:
          v10 = v9;
          if ( v9 != 34 && v9 != 23 && v9 != 3 && v9 != 22 && v9 != 42 && v9 != 38 && v9 != 39 && v9 != 40 )
            goto LABEL_18;
          goto LABEL_27;
        }
        if ( v9 == 39 )
        {
          v9 = 2;
          goto LABEL_34;
        }
      }
      if ( v9 != 32 && v9 != 6 && v9 != 31 && v9 != 30 )
        goto LABEL_10;
LABEL_27:
      v10 = v9;
      if ( v9 == 3 )
      {
LABEL_18:
        v11 = *(_QWORD *)(v14 + 40);
        v12 = *(_QWORD *)(v14 + 32);
        if ( v12 + v11 > a2 )
        {
          if ( v10 > 0x18 || (v17 = 16777524, !_bittest(&v17, v10)) )
          {
            if ( v10 != 3 && v10 != 33 && v10 != 35 )
              KeBugCheckEx(0x1Au, 0x3030308uLL, a2, v12, *(_QWORD *)(v14 + 40));
          }
          if ( v12 < a2 )
          {
            v11 = a2 - v12;
            *(_QWORD *)(v14 + 40) = a2 - v12;
            goto LABEL_19;
          }
          RtlRbRemoveNode(v2, v14);
        }
        else
        {
LABEL_19:
          if ( v12 + v11 - 1 > v3 && v10 != 3 )
            v3 = v12 + v11 - 1;
        }
      }
    }
  }
  return v3;
}
