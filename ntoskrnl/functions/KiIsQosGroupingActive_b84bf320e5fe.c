bool KiIsQosGroupingActive()
{
  char v0; // cl

  if ( (KiHeteroSchedulerOptionsMask & 2) != 0 )
    return (KiHeteroSchedulerOptions & 2) != 0;
  v0 = 0;
  if ( (KiVelocityFlags & 0x800) != 0 )
    return KeHeteroSystemQos != 0;
  return v0;
}
