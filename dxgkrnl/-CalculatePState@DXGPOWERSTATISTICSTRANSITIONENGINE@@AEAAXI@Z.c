void __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::CalculatePState(
        DXGPOWERSTATISTICSTRANSITIONENGINE *this,
        unsigned int a2)
{
  _DWORD *v2; // rsi
  unsigned int v4; // r8d
  unsigned int v6; // edx
  unsigned int v7; // eax
  int v8; // eax

  v2 = *(_DWORD **)this;
  v4 = *((_DWORD *)this + 14);
  if ( a2 <= *(_DWORD *)(*(_QWORD *)this + 4448LL) )
  {
    if ( a2 > v2[1113] && v4 )
      v4 = DXGPOWERSTATISTICSTRANSITIONENGINE::CalculateIdealPState(this, a2);
  }
  else
  {
    v4 = 0;
  }
  if ( a2 < v2[1114] && v4 < **((_DWORD **)this + 2) - 1 )
  {
    v6 = *((_DWORD *)this + 20);
    v7 = *((_DWORD *)this + 21) + 1;
    *((_DWORD *)this + 21) = v7;
    if ( a2 > v6 )
      v6 = a2;
    *((_DWORD *)this + 20) = v6;
    if ( v7 < v2[1116] )
      goto LABEL_13;
    v4 = DXGPOWERSTATISTICSTRANSITIONENGINE::CalculateIdealPState(this, v6);
  }
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 20) = 0;
LABEL_13:
  v8 = *((_DWORD *)this + 23);
  if ( v8 == 1 )
    goto LABEL_19;
  if ( v8 == 2 )
  {
    if ( v4 >= *((_DWORD *)this + 24) )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( v8 == 3 && v4 > *((_DWORD *)this + 24) )
LABEL_19:
    v4 = *((_DWORD *)this + 24);
LABEL_20:
  DXGPOWERSTATISTICSTRANSITIONENGINE::RequestPState(this, v4);
}
