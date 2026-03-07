char __fastcall CDesktopTreeData::SetWorldTransform(
        CDesktopTreeData *this,
        const struct CMILMatrix *a2,
        char a3,
        struct CMILMatrix *a4)
{
  char v4; // bp
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v11; // rcx
  _OWORD *v12; // rax
  void *v13; // rcx
  void *InputHandle; // rax
  CVisual *v15; // r11
  int v16; // ebx
  int v17; // edx
  __int64 v18; // [rsp+C0h] [rbp+8h] BYREF

  v4 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 16LL) + 496LL);
  if ( *((float *)this + 72) != *(float *)a2
    || *((float *)this + 73) != *((float *)a2 + 1)
    || *((float *)this + 74) != *((float *)a2 + 2)
    || *((float *)this + 75) != *((float *)a2 + 3)
    || *((float *)this + 76) != *((float *)a2 + 4)
    || *((float *)this + 77) != *((float *)a2 + 5)
    || *((float *)this + 78) != *((float *)a2 + 6)
    || *((float *)this + 79) != *((float *)a2 + 7)
    || *((float *)this + 80) != *((float *)a2 + 8)
    || *((float *)this + 81) != *((float *)a2 + 9)
    || *((float *)this + 82) != *((float *)a2 + 10)
    || *((float *)this + 83) != *((float *)a2 + 11)
    || *((float *)this + 84) != *((float *)a2 + 12)
    || *((float *)this + 85) != *((float *)a2 + 13)
    || *((float *)this + 86) != *((float *)a2 + 14)
    || *((float *)this + 87) != *((float *)a2 + 15) )
  {
    v4 = 1;
    *((_OWORD *)this + 18) = *(_OWORD *)a2;
    *((_OWORD *)this + 19) = *((_OWORD *)a2 + 1);
    *((_OWORD *)this + 20) = *((_OWORD *)a2 + 2);
    *((_OWORD *)this + 21) = *((_OWORD *)a2 + 3);
    *((_DWORD *)this + 88) = *((_DWORD *)a2 + 16);
  }
  *((_BYTE *)this + 11) = a3;
  if ( a4 )
  {
    v11 = *((_QWORD *)this + 34);
    if ( v11 )
    {
      *(_OWORD *)v11 = *(_OWORD *)a4;
      *(_OWORD *)(v11 + 16) = *((_OWORD *)a4 + 1);
      *(_OWORD *)(v11 + 32) = *((_OWORD *)a4 + 2);
      *(_OWORD *)(v11 + 48) = *((_OWORD *)a4 + 3);
      *(_DWORD *)(v11 + 64) = *((_DWORD *)a4 + 16);
    }
    else
    {
      v12 = operator new(0x44uLL);
      v13 = v12;
      if ( v12 )
      {
        *v12 = *(_OWORD *)a4;
        v12[1] = *((_OWORD *)a4 + 1);
        v12[2] = *((_OWORD *)a4 + 2);
        v12[3] = *((_OWORD *)a4 + 3);
        *((_DWORD *)v12 + 16) = *((_DWORD *)a4 + 16);
      }
      else
      {
        v13 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 34, (signed __int64)v13, 0LL) )
        operator delete(v13, 0x44uLL);
    }
  }
  if ( v4 || (v9 = *((_QWORD *)this + 31)) == 0 )
  {
    *((_QWORD *)this + 31) = v8;
  }
  else if ( v9 != v8 )
  {
    return 0;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    InputHandle = CVisual::GetInputHandle(*((CVisual **)this + 33));
    v16 = (int)InputHandle;
    if ( InputHandle )
    {
      CVisual::GetInputLuid(v15, &v18);
      McTemplateU0pxffffffffffffffff_EventWriteTransfer(
        v18,
        v17,
        v16,
        v18,
        *(_DWORD *)a2,
        *((_DWORD *)a2 + 1),
        *((_DWORD *)a2 + 2),
        *((_DWORD *)a2 + 3),
        *((_DWORD *)a2 + 4),
        *((_DWORD *)a2 + 5),
        *((_DWORD *)a2 + 6),
        *((_DWORD *)a2 + 7),
        *((_DWORD *)a2 + 8),
        *((_DWORD *)a2 + 9),
        *((_DWORD *)a2 + 10),
        *((_DWORD *)a2 + 11),
        *((_DWORD *)a2 + 12),
        *((_DWORD *)a2 + 13),
        *((_DWORD *)a2 + 14),
        *((_DWORD *)a2 + 15));
    }
  }
  return 1;
}
