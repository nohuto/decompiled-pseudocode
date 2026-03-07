__int64 __fastcall DirectComposition::CGenericInkMarshaler::SetIntegerProperty(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  bool *v5; // r11
  __int64 v6; // r10
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  unsigned int SegmentCount; // eax
  __int64 v16; // rcx
  unsigned int v17; // r9d
  __int64 v18; // rax

  v5 = a5;
  LODWORD(v6) = 0;
  *a5 = 0;
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( (unsigned __int64)(a4 - 1) <= 0xFF )
    {
      v18 = *((_QWORD *)this + 17);
      if ( !v18 )
      {
        *((_QWORD *)this + 17) = a4;
        goto LABEL_25;
      }
      if ( a4 == v18 )
        return (unsigned int)v6;
    }
    goto LABEL_27;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    SegmentCount = DirectComposition::CGenericInkMarshaler::GetSegmentCount(this);
    if ( *(_QWORD *)(v16 + 136) != v6 && v17 <= SegmentCount )
    {
      *(_DWORD *)(v16 + 16) &= ~0x40u;
      *(_DWORD *)(v16 + 144) = SegmentCount - v17;
      goto LABEL_25;
    }
    goto LABEL_27;
  }
  v9 = v8 - 2;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 3;
            if ( !v14 )
            {
              *((_DWORD *)this + 58) = a4;
              goto LABEL_12;
            }
            if ( v14 == 1 )
            {
              *((_DWORD *)this + 59) = a4;
LABEL_12:
              *((_DWORD *)this + 4) &= ~0x200u;
LABEL_25:
              *v5 = 1;
              return (unsigned int)v6;
            }
LABEL_27:
            LODWORD(v6) = -1073741811;
            return (unsigned int)v6;
          }
          *((_DWORD *)this + 44) = a4;
        }
        else
        {
          *((_DWORD *)this + 43) = a4;
        }
      }
      else
      {
        *((_DWORD *)this + 42) = a4;
      }
      *((_DWORD *)this + 4) &= ~0x80u;
      goto LABEL_25;
    }
    *((_DWORD *)this + 39) = a4;
  }
  else
  {
    LODWORD(v6) = DirectComposition::CGenericInkMarshaler::RemoveSegmentsAtEnd(this, (unsigned int)a4, a5);
  }
  return (unsigned int)v6;
}
