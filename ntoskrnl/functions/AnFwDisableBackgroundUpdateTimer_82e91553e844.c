BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_140D17DA8 )
  {
    result = KeCancelTimer(&stru_140D1AE60);
    byte_140D17DA8 = 0;
  }
  return result;
}
