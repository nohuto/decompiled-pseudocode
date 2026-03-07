void MonitorCleanupAdditionalTiming(void)
{
  void *v0; // rcx

  while ( 1 )
  {
    v0 = qword_1C013D108;
    if ( !qword_1C013D108 )
      break;
    qword_1C013D108 = *(void **)qword_1C013D108;
    operator delete(v0);
  }
}
