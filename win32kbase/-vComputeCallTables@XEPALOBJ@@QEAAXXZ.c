void __fastcall XEPALOBJ::vComputeCallTables(XEPALOBJ *this)
{
  __int64 v1; // r8
  int v3; // edx
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // rax
  int v7; // ecx

  v1 = *(_QWORD *)this;
  v3 = 2;
  if ( !*(_DWORD *)(*(_QWORD *)this + 28LL) )
  {
    v5 = *(_DWORD *)(v1 + 24);
    if ( (v5 & 2) == 0 )
    {
      if ( (v5 & 8) != 0 )
        v4 = 6;
      else
        v4 = 8 - ((v5 & 0x10) != 0);
      goto LABEL_15;
    }
    v6 = *(_DWORD **)(v1 + 112);
    if ( v6[2] == 31 )
    {
      v7 = v6[1];
      if ( v7 == 2016 )
      {
        if ( *v6 == 63488 )
        {
          v4 = 3;
LABEL_15:
          v3 = v4;
          goto LABEL_16;
        }
      }
      else if ( v7 == 992 && *v6 == 31744 )
      {
        v4 = 4;
        goto LABEL_15;
      }
    }
    v4 = 5;
    goto LABEL_15;
  }
  v4 = 1;
LABEL_16:
  *(_DWORD *)(v1 + 100) = v4;
  *(_DWORD *)(*(_QWORD *)this + 96LL) = v3;
}
