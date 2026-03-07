void __fastcall CParticleEmitterVisual::ParticleCollection::Clear(CParticleEmitterVisual::ParticleCollection *this)
{
  *((_DWORD *)this + 114) = 0;
  *((_QWORD *)this + 1) = *(_QWORD *)this;
  *((_QWORD *)this + 4) = *((_QWORD *)this + 3);
  *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
  *((_QWORD *)this + 10) = *((_QWORD *)this + 9);
  *((_QWORD *)this + 13) = *((_QWORD *)this + 12);
  *((_QWORD *)this + 16) = *((_QWORD *)this + 15);
  *((_QWORD *)this + 19) = *((_QWORD *)this + 18);
  *((_QWORD *)this + 22) = *((_QWORD *)this + 21);
  *((_QWORD *)this + 25) = *((_QWORD *)this + 24);
  *((_QWORD *)this + 28) = *((_QWORD *)this + 27);
  *((_QWORD *)this + 31) = *((_QWORD *)this + 30);
  *((_QWORD *)this + 34) = *((_QWORD *)this + 33);
  *((_QWORD *)this + 37) = *((_QWORD *)this + 36);
  *((_QWORD *)this + 40) = *((_QWORD *)this + 39);
  *((_QWORD *)this + 43) = *((_QWORD *)this + 42);
  *((_QWORD *)this + 46) = *((_QWORD *)this + 45);
  *((_QWORD *)this + 49) = *((_QWORD *)this + 48);
  *((_QWORD *)this + 52) = *((_QWORD *)this + 51);
  *((_QWORD *)this + 55) = *((_QWORD *)this + 54);
}
