void __fastcall DXGADAPTER::SetPowerComponentActiveCB(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edi

  v4 = (unsigned __int16)a2 + *((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1520);
  if ( v4 >= *((_DWORD *)this + 792) )
    WdLogSingleEntry5(0LL, 275LL, 23LL, this, 0LL, 0LL);
  if ( *((_BYTE *)this + 3465) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(520LL * v4 + *((_QWORD *)this + 378) + 348));
    LOBYTE(a3) = 1;
    DXGADAPTER::SetPowerComponentActiveCBWorker(this, v4, a3, 0);
  }
  else
  {
    WdLogSingleEntry5(0LL, 275LL, 23LL, this, 0LL, 0LL);
  }
}
