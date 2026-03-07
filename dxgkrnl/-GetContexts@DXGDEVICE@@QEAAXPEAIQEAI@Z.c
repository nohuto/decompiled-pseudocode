void __fastcall DXGDEVICE::GetContexts(DXGDEVICE *this, unsigned int *a2, unsigned int *const a3)
{
  __int64 v3; // r10
  _DWORD *i; // r9

  v3 = 0LL;
  for ( i = (_DWORD *)*((_QWORD *)this + 62); i != (_DWORD *)((char *)this + 496); i = *(_DWORD **)i )
  {
    if ( !i )
      break;
    a3[v3] = i[6];
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 0x40 )
      break;
  }
  *a2 = v3;
}
