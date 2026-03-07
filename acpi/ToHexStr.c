__int64 __fastcall ToHexStr(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 j; // r11
  __int64 v12; // r11
  __int64 v13; // r11
  unsigned int v14; // r9d
  __int64 v15; // r11
  __int64 v16; // r11
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned __int64 i; // r9
  __int64 v23; // rdx
  __int64 v25; // [rsp+58h] [rbp+10h] BYREF

  v25 = 0LL;
  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "D");
  if ( !v4 )
  {
    v4 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 135, (__int64)&v25);
    if ( !v4 )
    {
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 2;
      v5 = *(_QWORD *)(a2 + 80);
      switch ( *(_WORD *)(v5 + 2) )
      {
        case 1:
          v18 = *(_QWORD *)(v5 + 16);
          LODWORD(v8) = 2;
          do
          {
            v19 = (int)v8;
            v8 = (unsigned int)(v8 + 1);
            v18 >>= 4;
          }
          while ( v18 );
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v8 + 1;
          ConPrintf("qwDataValue = %I64x, length=%x, size=%x\n", 0LL, v8, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v20 = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v20;
          if ( v20 )
          {
            v21 = v19;
            **(_BYTE **)(*(_QWORD *)(a2 + 88) + 32LL) = 48;
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 1LL) = 120;
            for ( i = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL); v21 >= 2; --v21 )
            {
              v23 = i & 0xF;
              i >>= 4;
              *(_BYTE *)(v21 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v23];
            }
            goto LABEL_23;
          }
          break;
        case 2:
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(v5 + 24);
          ConPrintf("size=%x\n", *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v17 = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v17;
          if ( v17 )
          {
            memmove(
              *(void **)(*(_QWORD *)(a2 + 88) + 32LL),
              *(const void **)(*(_QWORD *)(a2 + 80) + 32LL),
              *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
            return (unsigned int)WriteObject(a1, v25, *(_QWORD *)(a2 + 88));
          }
          break;
        case 3:
          v7 = *(_DWORD *)(v5 + 24);
          if ( v7 )
            v8 = (unsigned int)(v7 + 4 * v7 - 1);
          else
            v8 = 0LL;
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v8 + 1;
          ConPrintf("length=%x,size=%x\n", v8, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v9 = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v9;
          if ( v9 )
          {
            v10 = 0LL;
            for ( j = 0LL; (unsigned int)v10 < *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL); j = (unsigned int)(v16 + 1) )
            {
              *(_BYTE *)(j + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 48;
              v12 = (unsigned int)(j + 1);
              *(_BYTE *)(v12 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 120;
              v13 = (unsigned int)(v12 + 1);
              v14 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL) + v10);
              v10 = (unsigned int)(v10 + 1);
              *(_BYTE *)(v13 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[(unsigned __int64)v14 >> 4];
              v15 = (unsigned int)(v13 + 1);
              *(_BYTE *)(v15 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v14 & 0xF];
              v16 = (unsigned int)(v15 + 1);
              *(_BYTE *)(v16 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 44;
            }
LABEL_23:
            *(_BYTE *)(v8 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 0;
            return (unsigned int)WriteObject(a1, v25, *(_QWORD *)(a2 + 88));
          }
          break;
        default:
          v4 = -1072431098;
          LogError(-1072431098);
          AcpiDiagTraceAmlError(a1, -1072431098);
          v6 = 188;
LABEL_20:
          PrintDebugMessage(v6, 0LL, 0LL, 0LL, 0LL);
          return v4;
      }
      v4 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      v6 = 187;
      goto LABEL_20;
    }
  }
  return v4;
}
