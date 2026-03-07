__int64 __fastcall HalpApicConvertFromRte(int a1, unsigned int a2, __int64 a3)
{
  int v6; // eax
  int v7; // edi
  unsigned int v8; // ebp
  bool v9; // zf
  int v10; // eax
  __int64 result; // rax

  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 48) = 0LL;
  *(_DWORD *)(a3 + 48) = (unsigned __int8)a1;
  *(_DWORD *)(a3 + 52) = (unsigned __int8)a1 >> 4;
  *(_DWORD *)(a3 + 16) = -1;
  v6 = a1 & 0x700;
  if ( (a1 & 0x700) == 0 )
    goto LABEL_12;
  switch ( v6 )
  {
    case 256:
      *(_DWORD *)(a3 + 12) = 2;
LABEL_12:
      *(_DWORD *)(a3 + 20) = 1;
      break;
    case 512:
      *(_DWORD *)(a3 + 20) = 3;
      break;
    case 1024:
      *(_DWORD *)(a3 + 20) = 2;
      break;
    case 1280:
      *(_DWORD *)(a3 + 20) = 7;
      break;
    case 1792:
      *(_DWORD *)(a3 + 20) = 4;
      break;
  }
  if ( (a2 & 0x10000) != 0 )
  {
    *(_DWORD *)(a3 + 24) = 7;
    *(_DWORD *)(a3 + 32) = a2 >> 17;
    if ( (a1 & 0x800) == 0 )
      goto LABEL_32;
    v7 = (a2 >> 17) | 0x8000;
    goto LABEL_31;
  }
  if ( (a1 & 0x800) != 0 )
  {
    if ( !HalpApicX2Mode || HalpApicRestoreNonX2ModeOnReset )
    {
      v8 = HIBYTE(a2);
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64))HalpApicRead)(224LL, 4LL, 7LL) == -1 )
      {
        *(_DWORD *)(a3 + 24) = 5;
        v7 = HIBYTE(a2);
LABEL_31:
        *(_DWORD *)(a3 + 32) = v7;
        goto LABEL_32;
      }
      *(_DWORD *)(a3 + 36) = v8 & 0xF;
      v7 = a2 >> 28;
    }
    else
    {
      *(_DWORD *)(a3 + 36) = (unsigned __int16)a2;
      v7 = HIWORD(a2);
    }
    *(_DWORD *)(a3 + 24) = 6;
    goto LABEL_31;
  }
  v9 = HalpApicX2Mode == 0;
  *(_DWORD *)(a3 + 24) = 4;
  if ( v9 || HalpApicRestoreNonX2ModeOnReset )
  {
    v7 = HIBYTE(a2);
    v10 = 4;
    if ( HIBYTE(a2) == 255 )
      v10 = 1;
    *(_DWORD *)(a3 + 24) = v10;
    goto LABEL_31;
  }
  *(_DWORD *)(a3 + 32) = a2;
  if ( a2 == -1 )
    *(_DWORD *)(a3 + 24) = 1;
LABEL_32:
  *(_DWORD *)(a3 + 8) = (a1 & 0x8000) == 0;
  result = 1LL;
  if ( (a1 & 0x2000) != 0 )
    result = 2LL;
  *(_DWORD *)a3 = result;
  if ( (a1 & 0x10000) == 0 )
    *(_DWORD *)(a3 + 12) |= 0x10u;
  *(_BYTE *)(a3 + 4) = 0;
  return result;
}
