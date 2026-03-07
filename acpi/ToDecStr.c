__int64 __fastcall ToDecStr(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v7; // ecx
  unsigned int v8; // eax
  _BYTE *v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r10d
  unsigned int i; // r8d
  __int64 v17; // r14
  __int64 v18; // r8
  __int64 v19; // r11
  __int64 v20; // r12
  __int64 v21; // rbp
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // r10
  unsigned __int64 v28; // r8
  char v29; // al
  __int64 v31; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 80);
  v31 = 0LL;
  v5 = ValidateArgTypes(a1, v3, 0, "D");
  if ( !v5 )
  {
    v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 135, (__int64)&v31);
    if ( !v5 )
    {
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 2;
      v6 = *(_QWORD *)(a2 + 80);
      switch ( *(_WORD *)(v6 + 2) )
      {
        case 1:
          v23 = *(_QWORD *)(v6 + 16);
          LODWORD(v24) = 0;
          do
          {
            v25 = (int)v24;
            v24 = (unsigned int)(v24 + 1);
            v23 /= 0xAuLL;
          }
          while ( v23 );
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v24 + 1;
          ConPrintf("qwDataValue = %I64x, length=%x, size=%x\n", 0LL, v24, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v26 = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v26;
          if ( v26 )
          {
            v27 = v25;
            v28 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
            if ( (int)v25 >= 0 )
            {
              do
              {
                v29 = HTOALookupTable[v28 % 0xA];
                v28 /= 0xAuLL;
                *(_BYTE *)(v27 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v29;
                --v27;
              }
              while ( v27 >= 0 );
            }
            *(_BYTE *)(v24 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 0;
            return (unsigned int)WriteObject(a1, v31, *(_QWORD *)(a2 + 88));
          }
          break;
        case 2:
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(v6 + 24);
          ConPrintf("size=%x\n", *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v22 = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v22;
          if ( v22 )
          {
            memmove(
              *(void **)(*(_QWORD *)(a2 + 88) + 32LL),
              *(const void **)(*(_QWORD *)(a2 + 80) + 32LL),
              *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
            return (unsigned int)WriteObject(a1, v31, *(_QWORD *)(a2 + 88));
          }
          break;
        case 3:
          v8 = *(_DWORD *)(v6 + 24);
          if ( v8 )
          {
            v9 = *(_BYTE **)(v6 + 32);
            v10 = v8 - 1;
            v11 = v8;
            do
            {
              if ( *v9 >= 0xAu )
                v12 = 3 - (*v9 < 0x64u);
              else
                v12 = 1;
              v10 += v12;
              ++v9;
              --v11;
            }
            while ( v11 );
          }
          else
          {
            v10 = 0;
          }
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v10 + 1;
          ConPrintf("length=%x,size=%x\n", v10, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v13 = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v13;
          if ( v13 )
          {
            v14 = *(_QWORD *)(a2 + 80);
            v15 = 0;
            for ( i = 0; v15 < *(_DWORD *)(v14 + 24); v14 = *(_QWORD *)(a2 + 80) )
            {
              v17 = i;
              v18 = i + 1;
              v19 = *(unsigned __int8 *)(v15 + *(_QWORD *)(v14 + 32));
              if ( (unsigned __int8)v19 >= 0xAu )
              {
                v20 = (int)((unsigned int)v19 / 0xA) % 10;
                v21 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL);
                if ( (unsigned __int8)v19 >= 0x64u )
                {
                  *(_BYTE *)(v17 + v21) = HTOALookupTable[(int)((unsigned int)v19 / 0x64) % 10];
                  *(_BYTE *)(v18 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v20];
                  v18 = (unsigned int)(v18 + 1);
                }
                else
                {
                  *(_BYTE *)(v17 + v21) = HTOALookupTable[v20];
                }
                *(_BYTE *)(v18 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[(unsigned int)v19 % 0xA];
                v18 = (unsigned int)(v18 + 1);
              }
              else
              {
                *(_BYTE *)(v17 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v19];
              }
              ++v15;
              *(_BYTE *)(v18 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 44;
              i = v18 + 1;
            }
            *(_BYTE *)(v10 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 0;
            return (unsigned int)WriteObject(a1, v31, *(_QWORD *)(a2 + 88));
          }
          break;
        default:
          v5 = -1072431098;
          LogError(-1072431098);
          AcpiDiagTraceAmlError(a1, -1072431098);
          v7 = 186;
LABEL_31:
          PrintDebugMessage(v7, 0LL, 0LL, 0LL, 0LL);
          return v5;
      }
      v5 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      v7 = 185;
      goto LABEL_31;
    }
  }
  return v5;
}
