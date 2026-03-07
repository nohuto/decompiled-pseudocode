void __fastcall DMMVIDEOPRESENTTARGET::SetTargetActivated(DMMVIDEOPRESENTTARGET *this, char a2, unsigned __int8 a3)
{
  __int64 v6; // rsi

  if ( !*((_QWORD *)this + 5) )
    WdLogSingleEntry0(1LL);
  v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
  if ( !*(_QWORD *)(v6 + 8) )
    WdLogSingleEntry0(1LL);
  DMMVIDEOPRESENTTARGET::SetPowerState(this, *(struct DXGADAPTER **)(*(_QWORD *)(v6 + 8) + 16LL), a3);
  if ( *((_BYTE *)this + 418) != a2 )
  {
    if ( a2 )
      *((_QWORD *)this + 53) = MEMORY[0xFFFFF78000000014];
    else
      *((_QWORD *)this + 54) = MEMORY[0xFFFFF78000000014];
  }
  *((_BYTE *)this + 418) = a2;
}
