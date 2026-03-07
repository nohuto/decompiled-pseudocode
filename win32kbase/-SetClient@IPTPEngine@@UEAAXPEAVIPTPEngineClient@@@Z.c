void __fastcall IPTPEngine::SetClient(IPTPEngine *this, struct IPTPEngineClient *a2)
{
  *((_QWORD *)this + 1) = a2;
}
