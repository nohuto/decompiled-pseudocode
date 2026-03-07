void __fastcall EtwpTraceALPC(__int64 a1, int a2)
{
  unsigned __int16 v2; // r9
  __int64 v3; // [rsp+30h] [rbp-20h] BYREF
  int v4; // [rsp+38h] [rbp-18h]
  int v5; // [rsp+3Ch] [rbp-14h]

  switch ( *(_DWORD *)(a1 + 16) )
  {
    case 1:
      v2 = 6689;
      goto LABEL_19;
    case 2:
      v2 = 6690;
      goto LABEL_19;
    case 3:
      v2 = 6691;
      goto LABEL_19;
  }
  if ( *(_DWORD *)(a1 + 16) != 4 )
  {
    switch ( *(_DWORD *)(a1 + 16) )
    {
      case 5:
        v2 = 6693;
        break;
      case 6:
        v2 = 6694;
        break;
      case 7:
        v2 = 6695;
        break;
      case 8:
        v4 = 8;
        v2 = 6696;
LABEL_20:
        v3 = a1 + 24;
        goto LABEL_21;
      case 9:
        v2 = 6697;
        break;
      default:
        return;
    }
LABEL_19:
    v4 = 4;
    goto LABEL_20;
  }
  v2 = 6692;
  v3 = a1 + 24;
  v4 = a2 - 24;
LABEL_21:
  v5 = 0;
  EtwTraceKernelEvent((__int64)&v3, 1u, 0x100000u, v2, 0x401902u);
}
