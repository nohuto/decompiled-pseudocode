__int64 __fastcall _DestroyMenuIfSupported(struct tagMENU *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C02D6CD0 && (int)qword_1C02D6CD0() >= 0 && qword_1C02D6CD8 )
    return (unsigned int)qword_1C02D6CD8(a1);
  return v1;
}
