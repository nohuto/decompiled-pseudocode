bool __fastcall BeginGetWidnowTrackInfoAsync(struct tagTHREADINFO **a1)
{
  return (unsigned int)PostEventMessageEx(
                         a1[2],
                         *((struct tagQ **)a1[2] + 54),
                         9u,
                         (struct tagWND *)a1,
                         0x342u,
                         1uLL,
                         0LL,
                         0LL) != 0;
}
